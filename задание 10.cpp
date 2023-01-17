#include <iostream>
#include <cmath>

class Equation {
public:
    virtual void findRoots() = 0;
};

class LinearEquation: public Equation {
private:
    double a;
    double b;
public:
    LinearEquation(double a, double b) : a(a), b(b) {}
    void findRoots() {
        if(a == 0) 
            std::cout << "This is not a linear equation" << std::endl;
        else {
            double x = -b/a;
            std::cout << "Root: " << x << std::endl;
        }
    }
};

class QuadraticEquation: public Equation {
private:
    double a;
    double b;
    double c;
public:
    QuadraticEquation(double a, double b, double c) : a(a), b(b), c(c) {}
    void findRoots() {
        if (a == 0) {
            std::cout << "This is not a quadratic equation" << std::endl;
            return;
        }
        double d = b * b - 4 * a * c;
        if (d < 0) {
            std::cout << "No real roots" << std::endl;
            return;
        }
        if (d == 0) {
            double x = -b / (2 * a);
            std::cout << "One root: " << x << std::endl;
            return;
        }
        double sqrt_val = sqrt(d);
        double x1 = (-b + sqrt_val) / (2 * a);
        double x2 = (-b - sqrt_val) / (2 * a);
        std::cout << "Roots: " << x1 << " , " << x2 << std::endl;
    }
};

int main() {
    Equation* eq[2];
    eq[0] = new LinearEquation(5, 7);
    eq[1] = new QuadraticEquation(5, 7, 8);

    for (int i = 0; i < 2; i++)
        eq[i]->findRoots();

    return 0;
}
