#include "Collection.h"

void Collection::AddFigure(Figure* figure) {
    allFigures.push_back(figure);
}

void Collection::Print() {
    for (int i = 0; i < allFigures.size(); i++) {
        allFigures[i]->print();
    }
}

int Collection::AllSquare() {
    int count = 0;
    for (int i = 0; i < allFigures.size(); i++) {
        count += allFigures[i]->square();
    }
    return count;
}

int Collection::AllPerimetr() {
    int count = 0;
    for (int i = 0; i < allFigures.size(); i++) {
        count += allFigures[i]->perimetr();
    }
    return count;
}

int Collection::AllMass() {
    int count = 0;
    for (int i = 0; i < allFigures.size(); i++) {
        count += allFigures[i]->mass();
    }
    return count;
}

int Collection::Memory() {
    int count = 0;
    for (int i = 0; i < allFigures.size(); i++) {
        count += allFigures[i]->size();
    }

    return count;
}

bool cmp (Figure* f1, Figure* f2) {
    return f1->mass() < f2->mass();
}

void Collection::Sort() {
    sort(allFigures.begin(), allFigures.end(), cmp);
}