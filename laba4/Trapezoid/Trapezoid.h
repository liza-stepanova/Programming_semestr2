#ifndef LABA4_FINAL_TRAPEZOID_H
#define LABA4_FINAL_TRAPEZOID_H

#include "../Interface/Figure.h"

class Trapezoid : public Figure {
private:
    double a{}, b{}, c{};
    double h{};
    CVector2D center;

public:
    Trapezoid(double a, double b, double c, double h, double massa);

    void initFromDialog() override;

    const char *classname() override;

    unsigned int size() override;

    double square() override;

    double perimetr() override;

    void print() override;


    CVector2D position() override;

    bool operator==(IPhysObject &ob) override;

    bool operator<(IPhysObject &ob) override;
};


#endif //LABA4_FINAL_TRAPEZOID_H
