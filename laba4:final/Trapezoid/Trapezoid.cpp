#include "Trapezoid.h"

void Trapezoid::initFromDialog() {
    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;
    cout << "Enter height: ";
    cin >> h;
    cout << "Enter mass: ";
    cin >> massTrapezoid;
}

const char *Trapezoid::classname() {
    return "Trapezoid";
}

unsigned int Trapezoid::size() {
    return sizeof(*this);
}

double Trapezoid::square() {
    return (a + b) / 2 * h;
}

double Trapezoid::perimetr() {
    return a + b + c + c;
}

double Trapezoid::mass() {
    return massTrapezoid;
}

CVector2D Trapezoid::position() {
    center.x = a / 2;
    center.y = h / 2;
    return center;
}

bool Trapezoid::operator==(IPhysObject &ob) {
    return mass() == ob.mass();
}

bool Trapezoid::operator<(IPhysObject &ob) {
    return mass() < ob.mass();
}

void Trapezoid::print() {
    cout << "Name: " << classname() << "\n";
    cout << "Perimetr: " << perimetr() << "\n";
    cout << "Center: " << position().x << position().y << "\n";
    cout << "Size: " << size() << "\n";
    cout << "Mass: " << massTrapezoid << "\n";
}
