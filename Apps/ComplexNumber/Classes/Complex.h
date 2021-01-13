//
// Created by roy on 30.12.2020.
//

#ifndef TRAIN_COMPLEX_H
#define TRAIN_COMPLEX_H

#include "iostream"
#include "cmath"

using namespace std;

class Complex {
private:
    double realPart, imaginaryPart;
public:
    Complex(double = 0.0, double = 0.0);
    void addition(const Complex &);
    void substraction(const Complex &);
    void printComplex(void);
    void setComplexNumber(double, double);
    void ComplexConjugates(const Complex &);
    double Modulus(const Complex &);

    double operator%(const Complex& b);
};


#endif //TRAIN_COMPLEX_H
