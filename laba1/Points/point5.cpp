#include "point5.h"

void fraction_p(double *a) {
    *a = *a - (double)(int)*a;
}


void fraction_ref(double &a){
    a = a - (double)(int)a;
}
