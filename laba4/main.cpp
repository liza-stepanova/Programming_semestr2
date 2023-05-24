#include <iostream>

#include "Interface/Collection.h"

int main() {
    Collection all;
    Line *line = new Line(3, 5, 7, 8, 10000);
    Trapezoid *trapezoid = new Trapezoid(6, 9, 10, 6, 353);

    all.AddFigure(line);
    all.AddFigure(trapezoid);
    all.Sort();
    all.Print();


    return 0;

}
