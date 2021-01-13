//
// Created by roy on 23.12.2020.
//

#include "Vector4.h"

Vector4::Vector4() {
    a=b=c=ct=0;
}

double Vector4::scalar(Vector4 v4, double metric[] ) {
    double temp;
    temp=a*v4.Getx()-b*v4.Gety()-c*v4.Getz()-ct*v4.Getct();
    return temp;
}

Vector4 Vector4::LorentzTransformation(double v) {
    const double LightSpeed=3e8;// defining constant
    double Beta = v/LightSpeed;
    double Gamma = 1/sqrt(1-Beta*Beta);

    Vector4 vPrime;
    vPrime.ct = Gamma*( this->Getct()-Beta*this->Getx() );
    vPrime.a = Gamma*( this->Getx()-Beta*this->Getct() );
    vPrime.b = this->Gety();
    vPrime.c = this->Getz();
    return vPrime;
}

Vector4::Vector4(double ai, double bi, double ci, double cti) {
    a=ai; b=bi; c=ci; ct=cti;
}

ostream &operator<<(ostream &os, const Vector4 &v4) {
    Vector4 v4c = v4;
    os<<"("<< v4c.Getx()<<","<<v4c.Gety()<<","<<v4c.Getz()<<","<<v4c.Getct()<<")"<<endl;
    return os;
}
