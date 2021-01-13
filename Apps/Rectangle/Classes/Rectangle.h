//
// Created by roy on 6.01.2021.
//

#ifndef TRAIN_RECTANGLE_H
#define TRAIN_RECTANGLE_H

#include <iostream>
using std::cout;
using std::ios;
#include <iomanip>
using std::setprecision;
using std::setiosflags;
using std::resetiosflags;
#include <cmath>
#include <list>
#include <algorithm>

class Rectangle {
protected:
    double point1[2];
    double point2[2];
    double point3[2];
    double point4[2];

    int row_count = 50;
    int column_count = 50;
    std::string fillChar;
    std::string periChar;
    bool valid;

public:
    Rectangle(double *, double *, double *, double *, std::string, std::string);
    virtual void setCoord(double *, double *, double *, double *);
    virtual void perimeter(void);
    virtual void area(void);
    virtual void draw(void);
    void square(void);
    void setFillCharacter(std::string c);
    void setPerimeterCharacter(std::string c);
    bool isValid(void);
    void setValid(bool v);

};


#endif //TRAIN_RECTANGLE_H
