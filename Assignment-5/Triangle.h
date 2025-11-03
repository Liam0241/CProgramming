#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle {
private:
    double side1, side2, side3;

public:
    Triangle();
    Triangle(double s1, double s2, double s3);
    double getPerimeter() const;
    double getArea() const;
    void display() const;

    bool operator<(const Triangle& other) const;
    bool operator>=(const Triangle& other) const;
    bool operator!=(const Triangle& other) const;
};

#endif
