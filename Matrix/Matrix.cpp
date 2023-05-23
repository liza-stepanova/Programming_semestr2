#include "Matrix.h"
#include <utility>
#include "../Exceptions/MyException.cpp"

using namespace std;

namespace Matrix {
    Matrix::Matrix(vector<vector<int>> newArr) {
        int len = 0;
        for (int i = 0; i < newArr.size(); i++) {
            len += newArr[i].size();
        }
        if (len != 9 || newArr.size() != 3) {
            throw Exceptions::MyException("Invalid matrix size");
        }
        arr = std::move(newArr);
    }

    void Matrix::printMatrix() {
        if (arr.empty()) return;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << arr[i][j] << " ";
            }
            cout << "\n";
        }
    }

    Matrix Matrix::multiplicationMatrix(Matrix other) {
        Matrix result({{0, 0, 0},
                       {0, 0, 0},
                       {0, 0, 0}});
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                for (int k = 0; k < 3; k++) {
                    result.arr[i][j] += this->arr[i][k] * other.arr[k][j];
                }
            }
        }
        return result;
    }

    Matrix *Matrix::multiplicationNumber(int a) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                this->arr[i][j] = this->arr[i][j] * a;
            }
        }
        return this;
    }

    Matrix *Matrix::addition(Matrix other) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                this->arr[i][j] += other.arr[i][j];
            }
        }
        return this;
    }

    Matrix *Matrix::subtraction(Matrix other) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                this->arr[i][j] -= other.arr[i][j];
            }
        }
        return this;
    }


    bool Matrix::operator==(Matrix other) {
        for (int i = 0; i < arr.size(); i++) {
            for (int j = 0; j < arr.size(); ++j) {
                if (this->arr[i][j] == other.arr[i][j]) {
                    continue;
                } else {
                    return false;
                }
            }
        }
        return true;
    }

    bool Matrix::operator!=(Matrix other) {
        return !(*this == other);
    }
}

