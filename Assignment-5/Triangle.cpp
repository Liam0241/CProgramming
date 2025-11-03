#include "Triangle.h"
#include <iostream>
#include <cmath>

Triangle::Triangle() : side1(1.0), side2(1.0), side3(1.0) {}

Triangle::Triangle(double s1, double s2, double s3)
    : side1(s1), side2(s2), side3(s3) {}

double Triangle::getPerimeter() const {
    return side1 + side2 + side3;
}

double Triangle::getArea() const {
    double s = getPerimeter() / 2.0;
    return sqrt(s * (s - side1) * (s - side2) * (s - side3));
}

void Triangle::display() const {
    std::cout << "Triangle sides: " << side1 << ", " << side2 << ", " << side3 << "\n";
    std::cout << "Perimeter: " << getPerimeter() << "\n";
    std::cout << "Area: " << getArea() << "\n";
}

bool Triangle::operator<(const Triangle& other) const {
    return getArea() < other.getArea();
}

bool Triangle::operator>=(const Triangle& other) const {
    return getArea() >= other.getArea();
}

bool Triangle::operator!=(const Triangle& other) const {
    return getArea() != other.getArea();
}
