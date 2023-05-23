#ifndef LABA1_SQUARE_H
#define LABA1_SQUARE_H

#include "Point.h"

namespace Shapes {
    class Square {
    private:
        Point *A, *B, *C, *D;

        static Point *coordinate(Point *point, double x, double y);

        static void set(Point *point, int x, int y);
    public:

        Square(int xA, int yA,int xB, int yB, int xC, int yC, int xD, int yD);

        Square *move(double x, double y);
    };

}

#endif //LABA1_SQUARE_H
