#ifndef LABA4_FINAL_COLLECTION_H
#define LABA4_FINAL_COLLECTION_H

#include "Figure.h"

#include "../Line/Line.h"
#include "../Trapezoid/Trapezoid.h"

class Collection {
private:
    vector<Figure*> allFigures;
public:
    void AddLine();

    void AddTrapezoid();

    void Print();

    void AllSquare();

    void AllPerimetr();

    void AllMass();

    void Memory();

    void Sort();
};



#endif //LABA4_FINAL_COLLECTION_H
