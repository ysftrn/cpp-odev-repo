//
// Created by roy on 23.12.2020.
//

#include "Vector3.h"


Vector3::Vector3() {
    x=y=z=0;
}

Vector3::Vector3(double xi, double yi, double zi) {
        x=xi;
        y=yi;
        z=zi;
}

Vector3::~Vector3() {

}

double Vector3::scalar(Vector3 v3) const {
    double temp;
    temp=x*v3.Getx()+y*v3.Gety()+z*v3.Getz();
    return temp;
}

Vector3 Vector3::operator()(double a, double b, double c) {
    return Vector3(a, b, c);
}

ostream &operator<<(ostream &os, const Vector3 &v3) {
    os<<"("<<v3.Getx()<<","<<v3.Gety()<<","<<v3.Getz()<<")"<<endl;
    return os;
}
