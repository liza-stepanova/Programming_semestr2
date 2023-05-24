#ifndef LABA4_FINAL_LINE_H
#define LABA4_FINAL_LINE_H


#include "../Interface/Figure.h"

class Line : public Figure{

private:
    double a_x{};
    double a_y{};
    double b_x{};
    double b_y{};
    CVector2D center;
public:
    Line(double a_x, double a_y, double b_x, double b_y, double massa);

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


#endif //LABA4_FINAL_LINE_H
