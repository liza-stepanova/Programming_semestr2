#ifndef LABA4_FINAL_TRAPEZOID_H
#define LABA4_FINAL_TRAPEZOID_H

#include "../Interface/Figure.h"

class Trapezoid : public Figure{

    private:
        double a{}, b{}, c{};
        double h{};
        double massTrapezoid{};
        CVector2D center;
    public:
        Trapezoid() = default;

        void initFromDialog() override;

        const char *classname() override;

        unsigned int size() override;

        double square() override;

        double perimetr() override;

        void print() override;

        double mass() override;

        CVector2D position() override;

        bool operator==(IPhysObject &ob) override;

        bool operator<(IPhysObject &ob) override;
    };


#endif //LABA4_FINAL_TRAPEZOID_H
