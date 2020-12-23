//
// Created by roy on 23.12.2020.
//

#ifndef TRAIN_VECTOR4_H
#define TRAIN_VECTOR4_H

#include "Vector3.h"
class Vector4 : public Vector3 {
    friend ostream & operator<<(ostream & os, const Vector4 &v4);

protected:
    double a, b, c, ct;

public:
    double ai, bi, ci, cti;

    Vector4();
    Vector4(double ai, double bi, double ci, double cti);

    //Accessor functions
    double Getx(){return a;}
    double Gety(){return b;}
    double Getz(){return c;}
    double Getct(){return ct;}

    double scalar(Vector4 v4);

    Vector4 LorentzTransformation(double v) ;

};


#endif //TRAIN_VECTOR4_H
