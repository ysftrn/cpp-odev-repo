//
// Created by roy on 6.01.2021.
//

#include "Cube.h"
#define _USE_MATH_DEFINES
#include<math.h>

template<typename C, typename T>
bool contains(C&& c, T e) {
    return std::find(std::begin(c), std::end(c), e) != std::end(c);
};

template<typename C, typename T>
void check(C&& c, T e) {
    std::cout << e << (contains(c,e) ? "" : " not") <<  " found\n";
}


Cube::Cube(double *a, double *b, double *c, double *d, double *e, double *f, double *g, double *h, std::string x, std::string y)
        : Rectangle(a,b,c,d,x,y) {
    setCoord(a,b,c,d,e,f,g,h);
    for (int y_c = 0 ; y_c < row_count; y_c++){
        for (int x_c = 0 ; x_c < column_count; x_c++){
            screenArray[y_c][ x_c] = 0;
        }
    }
}

void Cube::setCoord(double * p1, double * p2, double * p3, double * p4, double * p5, double * p6, double * p7, double *p8) {

    const int x = 0, y = 1;

    from1[x] = (p1[x] > column_count || p1[x] < 0.0) ? 0.0 : p1[x];
    from1[y] = (p1[y] > row_count || p1[y] < 0.0) ? 0.0 : p1[y];
    from2[x] = (p2[x] > column_count || p2[x] < 0.0) ? 0.0 : p2[x];
    from2[y] = (p2[y] > row_count || p2[y] < 0.0) ? 0.0 : p2[y];
    from3[x] = (p3[x] > column_count || p3[x] < 0.0) ? 0.0 : p3[x];
    from3[y] = (p3[y] > row_count || p3[y] < 0.0) ? 0.0 : p3[y];
    from4[x] = (p4[x] > column_count || p4[x] < 0.0) ? 0.0 : p4[x];
    from4[y] = (p4[y] > row_count || p4[y] < 0.0) ? 0.0 : p4[y];

    point1[x] = from1[x];
    point1[y] = from1[y];
    point2[x] = from2[x];
    point2[y] = from2[y];
    point3[x] = from3[x];
    point3[y] = from3[y];
    point4[x] = from4[x];
    point4[y] = from4[y];

    to1[x] = (p5[x] > column_count || p5[x] < 0.0) ? 0.0 : p5[x];
    to1[y] = (p5[y] > row_count || p5[y] < 0.0) ? 0.0 : p5[y];
    to2[x] = (p6[x] > column_count || p6[x] < 0.0) ? 0.0 : p6[x];
    to2[y] = (p6[y] > row_count || p6[y] < 0.0) ? 0.0 : p6[y];
    to3[x] = (p7[x] > column_count || p7[x] < 0.0) ? 0.0 : p7[x];
    to3[y] = (p7[y] > row_count || p7[y] < 0.0) ? 0.0 : p7[y];
    to4[x] = (p8[x] > column_count || p8[x] < 0.0) ? 0.0 : p8[x];
    to4[y] = (p8[y] > row_count || p8[y] < 0.0) ? 0.0 : p8[y];

    if( (from1[y] == from2[y]) && (from1[x] == from4[x]) &&
        (from2[x] == from3[x]) && (from3[y] == from4[y])){
        perimeter();
        area();
        square();
        setValid(true);
    }
    else{
        cout << "Cordinates do not form a square!\n";
        setValid(false);
    }
}

void Cube::draw(void) {
    const int x = 0;
    const int y = 1;

    // Back Face
    drawLine(from1[x],from1[y],from2[x],from2[y]);
    drawLine(from2[x],from2[y],from3[x],from3[y]);
    drawLine(from3[x],from3[y],from4[x],from4[y]);
    drawLine(from1[x],from1[y],from4[x],from4[y]);


    // Front Face
    drawLine(to1[x],to1[y],to2[x],to2[y]);
    drawLine(to2[x],to2[y],to3[x],to3[y]);
    drawLine(to3[x],to3[y],to4[x],to4[y]);
    drawLine(to1[x],to1[y],to4[x],to4[y]);

    // Connection Lines
    drawLine(from1[x],from1[y],to1[x],to1[y]);
    drawLine(from2[x],from2[y],to2[x],to2[y]);
    drawLine(from3[x],from3[y],to3[x],to3[y]);
    drawLine(from4[x],from4[y],to4[x],to4[y]);



    for (int y_c = 0 ; y_c < row_count; y_c++){
        for (int x_c = 0 ; x_c < column_count; x_c++){
            if(screenArray[y_c][ x_c] != 1){
                cout << fillChar;
            }
            else{
                cout << periChar;
            }
        }
        cout << std::endl;
    }

}

void Cube::drawLine(float fx, float fy, float tx, float ty) {
    float dx = abs(tx - fx);
    float sx = fx < tx ? 1 : -1;
    float dy = -abs(ty - fy);
    float sy = y0 < y1 ? 1 : -1;
    float err = dx + dy;

    while (true)
    {
        screenArray[(int)fy][(int)fx] = 1;
        if (fx == tx && fy == ty)
            break;
        float e2 = 2 * err;
        if (e2 >= dy)
        {
            err += dy;
            fx += sx;
        }
        if (e2 <= dx)
        {
            err += dx;
            fy += sy;
        }
    }
}



