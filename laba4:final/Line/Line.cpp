#include "Line.h"

void Line::initFromDialog() {
    cout << "Enter a_x, a_y, b_x, b_y: ";
    cin >> a_x >> a_y >> b_x >> b_y;
    cout << "Enter mass: ";
    cin >> massLine;
}

const char *Line::classname() {
    return "Line";
}

unsigned int Line::size() {
    return sizeof(*this);
}

double Line::square() {
    return 0;
}

double Line::perimetr() {
    return sqrt((b_x - a_x) * (b_x - a_x) + (b_y - a_y) * (b_y - a_y));
}

CVector2D Line::position() {
    center.x = b_x - a_x;
    center.y = b_y - a_y;
    return center;
}

double Line::mass() {
    return massLine;
}

bool Line::operator==(IPhysObject &ob) {
    return mass() == ob.mass();
}

bool Line::operator<(IPhysObject &ob) {
    return mass() < ob.mass();
}

void Line::print() {
    cout << "Name: " << classname() << "\n";
    cout << "Perimetr: " << perimetr() << "\n";
    cout << "Center: " << position().x << " " << position().y << "\n";
    cout << "Size: " << size() << "\n";
    cout << "Mass: " << massLine << "\n";
}
