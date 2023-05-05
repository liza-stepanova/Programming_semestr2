#include "../ExceptionArray.cpp"
#include <iostream>

using namespace std;

template<class T>
class Array {
private:
    int n;
    int len;
    T *array;
public:
    Array(int N, T a) {
        n = N;
        array = new T[n];
        array[0] = a;
        len = 1;
    }

    void push(T a) {
        if (len + 1 > n) {
            throw ExceptionArray("This index does not exist");
        }
        array[len] = a;
        len += 1;
    }

    T getValue(int i) {
        if (i >= n || i < 0) {
            throw ExceptionArray("This index does not exist");

        } else return array[i];
    }

    void setValue(int i, T b) {
        if (i >= n || i < 0) {
            throw ExceptionArray("This index does not exist");

        } else array[i] = b;
    }

    void print() {
        for (int i = 0; i < len; i++) {
            cout << array[i] << ' ';
        }
    }

};
