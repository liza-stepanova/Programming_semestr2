#include <iostream>

using namespace std;

int a, b;

// параметром функции является указатель
void addition_p(int *a, int b);

// параметр функции передаётся по ссылке
void addition_ref(int &a, int b);
