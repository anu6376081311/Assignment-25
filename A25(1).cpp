#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r=0, double i=0) : real(r), imag(i) {}

    void setComplex(double r, double i) {
        real = r;
        imag = i;
    }

    void printComplex() {
        if (imag >= 0) {
            cout << real << " + " << imag << "i" << std::endl;
        } else {
            cout << real << " - " << -imag << "i" << std::endl;
        }
    }
};
