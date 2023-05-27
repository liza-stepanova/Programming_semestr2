#pragma once
// Внутренний класс CIterator для итерирования по элементам буфера
template<typename T>
class CIterator : public std::iterator<std::random_access_iterator_tag, T> {
private:
    T *obj;             // Указатель на текущий объект
    T *begin;           // Указатель на начало буфера
    size_t capacity;    // Емкость буфера
    size_t begin_elems; // Количество элементов в начале буфера

public:
    CIterator() : obj(nullptr), begin(nullptr), capacity(0), begin_elems(0) {}

    CIterator(T *ptr, T *begin_, size_t capacity_, size_t be) : obj(ptr), begin(begin_), capacity(capacity_),
                                                                begin_elems(be) {}

    CIterator(CIterator const &c) = default;

    // Оператор сложения с числом
    CIterator operator+(int k) {
        if (obj + k >= begin + capacity) {
            return CIterator(begin + (obj + k - begin - capacity), begin, capacity, begin_elems);
        } else {
            return CIterator(obj + k, begin, capacity, begin_elems);
        }
    }

    // Оператор вычитания числа
    CIterator operator-(int k) {
        if (obj - k < begin) {
            return CIterator(begin + capacity - (begin - obj + k), begin, capacity, begin_elems);
        } else {
            return CIterator(obj - k, begin, capacity, begin_elems);
        }
    }

    // Оператор присваивания суммы
    CIterator &operator+=(int const &k) {
        if (obj + k >= begin + capacity) {
            obj = begin + (obj + k - begin - capacity);
        } else {
            obj = obj + k;
        }
        return *this;
    }

    // Оператор присваивания разности
    CIterator &operator-=(int k) {
        if (obj < begin + k) {
            obj = begin + capacity - (begin - obj + k);
        } else {
            obj = obj - k;
        }
        return *this;
    }

    // Оператор вычитания двух итераторов
    int operator-(CIterator const &iterator) {
        return (obj - iterator.obj + capacity) % capacity;
    }

    // Операторы сравнения
    bool operator==(const CIterator &a) {
        return a.obj == obj;
    }

    bool operator!=(const CIterator &a) {
        return a.obj != obj;
    }

    bool operator>=(const CIterator &a) {
        return *this > a || *this == a;
    }

    bool operator<=(CIterator &a) {
        return *this < a || *this == a;
    }

    bool operator>(const CIterator &a) {
        if ((obj - (begin + begin_elems) >= 0 && a.obj - (begin + begin_elems) >= 0) ||
            (obj - (begin + begin_elems) < 0 && a.obj - (begin + begin_elems) < 0)) {
            return obj > a.obj;
        } else {
            return obj < a.obj;
        }
    }

    bool operator<(const CIterator &a) {
        if ((obj - (begin + begin_elems) >= 0 && a.obj - (begin + begin_elems) >= 0) ||
            (obj - (begin + begin_elems) < 0 && a.obj - (begin + begin_elems) < 0)) {
            return obj < a.obj;
        } else {
            return obj > a.obj;
        }
    }

    // Операторы присваивания
    CIterator &operator=(const CIterator &a) = default;

    // Операторы инкремента и декремента
    CIterator operator++(int) {
        CIterator result(*this);
        *this += 1;
        return (result);
    }

    CIterator operator--(int) {
        CIterator result(*this);
        *this -= 1;
        return (result);
    }

    CIterator &operator++() { return *this += 1; }

    CIterator &operator--() { return *this -= 1; }

    // Операторы доступа к элементам
    T &operator*() { return *obj; }

    T *operator->() { return obj; }

    T &operator[](const int &i) {
        if (i >= 0) {
            return obj[i];
        }
    }

    // Получение объекта, на который указывает итератор
    T get_obj() {
        return *(obj);
    }
};