#include <iostream>
#include <cmath>

using namespace std;


class Shape {
public:
    virtual double area() const = 0; 
    virtual double perimeter() const = 0; 
};


class Circle : public Shape {
private:
    double radius;

public:
    Circle(double _radius) : radius(_radius) {}

    double area() const override {
        return M_PI * radius * radius; 
    }

    double perimeter() const override {
        return 2 * M_PI * radius; 
    }
};


class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double _length, double _width) : length(_length), width(_width) {}

    double area() const override {
        return length * width; 
    }

    double perimeter() const override {
        return 2 * (length + width); 
    }
};

class Triangle : public Shape {
private:
    double side1;
    double side2;
    double side3;

public:
    Triangle(double _side1, double _side2, double _side3) : side1(_side1), side2(_side2), side3(_side3) {}

    double area() const override {
        
        double s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    double perimeter() const override {
        return side1 + side2 + side3; 
    }
};

int main() {
    Circle circle(5);
    Rectangle rectangle(4, 6);
    Triangle triangle(3, 4, 5);

    cout << "Circle - Area: " << circle.area() << ", Perimeter: " << circle.perimeter() << endl;
    cout << "Rectangle - Area: " << rectangle.area() << ", Perimeter: " << rectangle.perimeter() << endl;
    cout << "Triangle - Area: " << triangle.area() << ", Perimeter: " << triangle.perimeter() << endl;

    return 0;
}
