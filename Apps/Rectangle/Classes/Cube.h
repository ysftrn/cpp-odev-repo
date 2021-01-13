//
// Created by roy on 6.01.2021.
//

#ifndef TRAIN_CUBE_H
#define TRAIN_CUBE_H

#include "Rectangle.h"
class Cube : public Rectangle {
private:
    double from1[2];
    double from2[2];
    double from3[2];
    double from4[2];
    double to1[2];
    double to2[2];
    double to3[2];
    double to4[2];

    int absValue;
    double diffY;
    double diffX;

    int screenArray [50][50];

public:
    Cube(double *, double *, double *, double *, double *, double *, double *, double *, std::string, std::string);
    virtual void setCoord(double *, double *, double *, double *, double *, double *, double *, double *);
    virtual void draw(void) override;
    virtual void drawLine(float fx, float fy, float tx, float ty);
};


#endif //TRAIN_CUBE_H
