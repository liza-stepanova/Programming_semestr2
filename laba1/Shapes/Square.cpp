#include "Square.h"

namespace Shapes {
    Point *Square::coordinate(Point *point, double x, double y) {
        point->x += x;
        point->y += y;
        return point;
    }

    Square *Square::move(double x, double y) {
        coordinate(A, x, y);
        coordinate(B, x, y);
        coordinate(C, x, y);
        coordinate(D, x, y);
        return this;
    }

    void Square::set(Point *point, int x, int y) {
        point->x = x;
        point->y = y;
    }

    Square::Square(int xA, int yA, int xB, int yB, int xC, int yC, int xD, int yD) {
       set(A,xA, yA);
       set(B,xB, yB);
       set(C,xC, yC);
       set(D,xD, yD);
    }
} // Shapes
