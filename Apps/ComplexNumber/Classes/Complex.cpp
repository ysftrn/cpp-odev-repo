//
// Created by roy on 30.12.2020.
//

#include "Complex.h"

Complex::Complex(double real, double imaginaryPart){
    setComplexNumber(real, imaginaryPart);
}

void Complex::addition(const Complex &a){
    realPart += a.realPart;
    imaginaryPart += a.imaginaryPart;
}

void Complex::substraction(const Complex &b){
    realPart  -= b.realPart;
    imaginaryPart -= b.imaginaryPart;
}

void Complex::setComplexNumber(double realPart, double imaginaryPart){
    realPart = realPart;
    imaginaryPart = imaginaryPart;
}

void Complex::ComplexConjugates(const Complex &a) {
    realPart = a.realPart;
    imaginaryPart = -1 * a.imaginaryPart;
}

void Complex::printComplex(void) {
 std::cout << "(" << realPart << ", " << imaginaryPart << ")" ;
}

double Complex::Modulus(const Complex &a) {
    double modulus = sqrt(a.realPart*a.realPart+a.imaginaryPart*a.imaginaryPart);
    return modulus;
}

double Complex::operator%(const Complex &a) {
    double modulus = sqrt(a.realPart*a.realPart+a.imaginaryPart*a.imaginaryPart);
    return modulus;
}
