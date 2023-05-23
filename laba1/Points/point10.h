#include <iostream>

using namespace std;

struct complex {
    int real;
    int imag;
};

void conjugate_p(struct complex *z);
void conjugate_ref(struct complex &z);
