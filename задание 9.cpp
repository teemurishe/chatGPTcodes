#include <iostream>

class Shape {
public:
    virtual double getArea() = 0;
};

class Rectangle: public Shape {
private:
    double width;
    double height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double getArea() { return width * height; }
};

class Circle: public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double getArea() { return 3.14159265358979323846 * radius * radius; }
};

class Triangle: public Shape {
private:
    double base;
    double height;
public:
    Triangle(double b, double h) : base(b), height(h) {}
    double getArea() { return 0.5 * base * height; }
};

class Trapezoid: public Shape {
private:
    double a;
    double b;
    double h;
public:
    Trapezoid(double a, double b, double h) : a(a), b(b), h(h) {}
    double getArea() { return (a + b) * h / 2; }
};

int main() {
    Shape* shapes[4];
    shapes[0] = new Rectangle(5, 7);
    shapes[1] = new Circle(5);
    shapes[2] = new Triangle(5, 7);
    shapes[3] = new Trapezoid(5, 7, 8);

    for (int i = 0; i < 4; i++)
        std::cout << "Area: " << shapes[i]->getArea() << std::endl;

    return 0;
}
