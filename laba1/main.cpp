#include <iostream>
#include "Points/point2.h"
#include "Points/point5.h"
#include "Points/point10.h"
#include "Shapes/Square.h"

int main() {

// region Пункт 2: Увеличение значения одной переменной на заданную величину (вторая переменная).
//    cout << "Введите значения a и b: ";
//    cin >> a >> b;
//    addition_p(&a, b);
//    cout << a << endl;
//
//    cout << "Введите значения a и b: ";
//    cin >> a >> b;
//    addition_ref(a, b);
//    cout << a << endl;
// endregion
//   auto s = new Shapes::Square();
//    s->move(1, 0)
//     ->move(0, 4)
//   ;
// -----------------------------------------------------------------------------------
//  Пункт 5: Отбрасывает от вещественного числа его целую часть.
//    double c = 478.35234;
//    cout << c << endl;
//    fraction_p(&c);
//    cout << c << endl;
//
//    c = 0.99;
//    fraction_ref(c);
//    cout << c << endl;

//------------------------------------------------------------------------------------
//  Пункт 10: Меняет комплексную переменную на комплексно сопряженную к ней.
//    complex z;
//    z.real = 4;
//    z.imag = -12;
//    conjugate_p(&z);
//    cout << z.real << endl;
//    cout << z.imag << endl;
//
//    conjugate_ref(z);
//    cout << z.real << endl;
//    cout << z.imag << endl;

//--------------------------------------------------------------------------------------

//  Пункт 13: Передвигает квадрат на заданный вектор.
    Shapes::Square one = *new Shapes::Square(5, 6, 7, 2, 4, 5, 7, 8);
    one.move(5, 7);
}
