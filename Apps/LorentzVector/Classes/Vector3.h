//
// Created by roy on 23.12.2020.
//

#ifndef TRAIN_VECTOR3_H
#define TRAIN_VECTOR3_H

#include <iostream>
#include <cmath>
using namespace std;

class Vector3 {
  friend ostream & operator << (ostream &os, const Vector3 &v3);

protected:
    double x,y,z;
public:
    double xi,yi,zi;

    Vector3();
    Vector3(double , double ,double );
    ~Vector3();

    double Getx() const { return x;}
    double Gety() const { return y;}
    double Getz() const { return z;}

    double scalar(Vector3) const;

    Vector3 operator()(double,double,double);

};




#endif //TRAIN_VECTOR3_H
