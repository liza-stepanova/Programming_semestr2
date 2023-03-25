#include "Collection.h"

void Collection::AddLine() {
    Line *line = new Line();
    line->initFromDialog();
    allFigures.push_back(line);
}

void Collection::AddTrapezoid() {
    Trapezoid *trapezoid = new Trapezoid();
    trapezoid->initFromDialog();
    allFigures.push_back(trapezoid);
}

void Collection::Print() {
    for (int i = 0; i < allFigures.size(); i++) {
        allFigures[i]->print();
    }
}

void Collection::AllSquare() {
    int count = 0;
    for (int i = 0; i < allFigures.size(); i++) {
        count += allFigures[i]->square();
    }
    cout << count << "\n";
}

void Collection::AllPerimetr() {
    int count = 0;
    for (int i = 0; i < allFigures.size(); i++) {
        count += allFigures[i]->perimetr();
    }
    cout << count << "\n";
}

void Collection::AllMass() {
    int count = 0;
    for (int i = 0; i < allFigures.size(); i++) {
        count += allFigures[i]->mass();
    }
    cout << count << "\n";
}

void Collection::Memory() {
    int count = 0;
    for (int i = 0; i < allFigures.size(); i++) {
        count += allFigures[i]->size();
    }
    cout << count << "\n";
}

void Collection::Sort() {
    for (int i = 1; i < allFigures.size(); i++) {
        for (int j = i; j > 0 && allFigures[j - 1]->mass() > allFigures[j]->mass(); j--) {
            swap(allFigures[j - 1], allFigures[j]);
        }
    }
    for (int i = 0; i < allFigures.size(); i++) {
        cout << allFigures[i]->mass() << " ";
    }
    cout << "\n";
}