#ifndef LABA3_MATRIX_H
#define LABA3_MATRIX_H

#include <iostream>
#include <vector>

using namespace std;

namespace Matrix {
    class Matrix {
    private:
        vector<vector<int>> arr;
    public:
        Matrix(vector<vector<int>> newArr);

        void printMatrix();

        Matrix multiplicationMatrix(Matrix other);

        Matrix *multiplicationNumber(int a);

        Matrix *addition(Matrix other);

        Matrix *subtraction(Matrix other);

        bool operator==(Matrix other);

        bool operator!=(Matrix other);

    };
}

#endif
 
 