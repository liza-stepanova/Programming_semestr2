#include "point10.h"

void conjugate_p(struct complex *z){
    z->real = ~(z->real) + 1;
    z->imag = ~(z->imag) + 1;
}

void conjugate_ref(struct complex &z){
    z.real = ~(z.real) + 1;
    z.imag = ~(z.imag) + 1;
}