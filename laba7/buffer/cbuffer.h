#pragma once
#include <iostream>
#include "buffer-iterator.h"

// Объявляем шаблонный класс CRing_buffer
template<typename S>
class CRing_buffer {
private:
    int begin_;      // Индекс начала буфера
    int end_;        // Индекс конца буфера
    int size_;       // Текущий размер буфера
    int capacity_;   // Емкость (максимальный размер) буфера

    // Вспомогательные функции для получения предыдущего и следующего индекса в кольцевом буфере
    int prev(int a) {
        return (a + capacity_ - 1) % capacity_;
    }

    int next(int a) {
        return (a + 1) % capacity_;
    }

    // Перемещение данных в новый буфер с учетом сдвига
    S *move_data(size_t new_cap, size_t shift) {
        S *new_data = static_cast<S *>(operator new(sizeof(S) * new_cap));
        iterator it = begin();

        for (int i = 0; i < size_; ++i) {
            new(new_data + i + shift) S(it.get_obj());
            ++it;
        }

        return new_data;
    }

    // Установка новых данных в буфер
    void set_data(S *new_data, size_t new_cap) {
        operator delete(data);
        data = new_data;
        begin_ = 0;
        capacity_ = new_cap;
    }

public:
    S *data{};  // Указатель на данные в буфере

    friend class CIterator<S>;

    using iterator = CIterator<S>;

    // Конструктор по умолчанию
    CRing_buffer<S>() : data(nullptr), size_(0), capacity_(0) {}

    CRing_buffer<S>(CRing_buffer<S> const &a) = default;

    // Метод возвращающий итератор на начало
    iterator begin() {
        if (size_ == 0) return CIterator<S>();
        return CIterator<S>(data + begin_, data, capacity_, begin_);
    }

    // Метод возвращающий итератор на конец
    iterator end() {
        if (size_ == 0) return CIterator<S>();
        return CIterator<S>(data + end_, data, capacity_, begin_);
    }

    // Оператор индексации
    S &operator[](const int &i) {
        if (0 <= i && i < size_) {
            return *(data + (begin_ + i) % capacity_);
        }
        throw;
    }

    // Метод добавления элемента в конец буфера
    void push_back(const S &value) {
        if (size_ < capacity_ - 1) {
            new(data + end_) S(value);
            end_ = next(end_);
        } else {
            int new_cap = (capacity_ == 0) ? 4 : 2 * capacity_;
            S *new_data = move_data(new_cap, 0);
            new(new_data + size_) S(value);
            set_data(new_data, new_cap);
            end_ = size_ + 1;
        }
        size_++;
    }

    // Метод добавления элемента в начало буфера
    void push_front(const S &value) {
        if (size_ < capacity_ - 1) {
            begin_ = prev(begin_);
            new(data + begin_) S(value);
        } else {
            int new_cap = (capacity_ == 0) ? 4 : 2 * capacity_;
            S *new_data = move_data(new_cap, 1);
            new(new_data) S(value);
            set_data(new_data, new_cap);
            end_ = size_ + 1;
        }
        size_++;
    }

    // Метод изменения вместимости буфера
    void resize(size_t new_cap) {
        if (new_cap > capacity_) {
            S *new_data = move_data(new_cap, 0);
            set_data(new_data, new_cap);
            end_ = size_ + 1;
        }
    }

    // Метод удаления последнего элемента
    void pop_back() {
        if (size_ != 0) {
            end_ = prev(end_);
            data[end_].~S();
            --size_;
        }
    }

    // Метод удаления первого элемента
    void pop_front() {
        if (size_ != 0) {
            data[begin_].~S();
            begin_ = next(begin_);
            --size_;
        }
    }

    // Метод получения размера буфера
    size_t size() {
        return size_;
    }

    // Метод получения вместимости буфера
    size_t capacity() {
        return capacity_;
    }

    // Деструктор
    ~CRing_buffer() {
        delete data;
    }
};
