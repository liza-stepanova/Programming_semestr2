#ifndef LABA4_FINAL_COLLECTION_H
#define LABA4_FINAL_COLLECTION_H

#include "Figure.h"

#include "../Line/Line.h"
#include "../Trapezoid/Trapezoid.h"

class Collection {
private:
    vector<Figure*> allFigures;
public:
    void AddFigure(Figure* figure);

    void Print();

    int AllSquare();

    int AllPerimetr();

    int AllMass();

    int Memory();

    void Sort();
};

#endif //LABA4_FINAL_COLLECTION_H
