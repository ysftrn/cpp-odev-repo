//
// Created by roy on 6.01.2021.
//

#include "Rectangle.h"

Rectangle::Rectangle(double * a, double * b, double * c, double * d, std::string x, std::string y) {
    setCoord(a, b, c, d);
    setFillCharacter(x);
    setPerimeterCharacter(y);
}

void Rectangle::setCoord(double * p1, double * p2, double * p3, double * p4) {

    const int x = 0, y = 1;

    point1[x] = (p1[x] > column_count || p1[x] < 0.0) ? 0.0 : p1[x];
    point1[y] = (p1[y] > row_count || p1[y] < 0.0) ? 0.0 : p1[y];
    point2[x] = (p2[x] > column_count || p2[x] < 0.0) ? 0.0 : p2[x];
    point2[y] = (p2[y] > row_count || p2[y] < 0.0) ? 0.0 : p2[y];
    point3[x] = (p3[x] > column_count || p3[x] < 0.0) ? 0.0 : p3[x];
    point3[y] = (p3[y] > row_count || p3[y] < 0.0) ? 0.0 : p3[y];
    point4[x] = (p4[x] > column_count || p4[x] < 0.0) ? 0.0 : p4[x];
    point4[y] = (p4[y] > row_count || p4[y] < 0.0) ? 0.0 : p4[y];

    if( (point1[y] == point2[y]) && (point1[x] == point4[x]) &&
        (point2[x] == point3[x]) && (point3[y] == point4[y])){
        perimeter();
        area();
        square();
        setValid(true);
    }
    else{
        cout << "Cordinates do not form a rectangle!\n";
        setValid(false);
    }
}

void Rectangle::perimeter(void) {
    double l = fabs(point4[1] - point1[1]), w = fabs(point2[0] - point1[0]);
    cout << setiosflags(ios::fixed | ios::showpoint)
         << " The area is: " << setprecision(1)
         << resetiosflags(ios::fixed | ios::showpoint);
}

void Rectangle::area(void) {
    double l = fabs (point4[1] - point1[1]), w = fabs (point2[0] - point1[0]);
    cout << setiosflags (ios::fixed | ios::showpoint)
         << "The area is: " << setprecision (1)
         << w * l<< resetiosflags (ios::fixed | ios::showpoint)
         << "\n\n";
}

void Rectangle::draw(void) {
     for (double y = column_count; y >= 0.0; --y){
         for (double x = 0.0; x <= row_count; ++x){
             if((point1[0] == x && point1[1] == y) ||
                (point4[0] == x && point4[1] == y)){
                while(x <= point2[0]){
                    cout << " "  << periChar<< " ";
                    ++x;
                }
                cout << " " << '#' << " ";
             }
             else if( ((x <= point4[0] && x >= point1[0])) &&
                             point4[1] >= y && point1[1] <= y ){
                cout << " " << periChar << " ";
                for(x++; x < point2[0];){
                    cout<< " " << fillChar<< " ";
                    ++x;
                }
                cout << " " << periChar << " ";
             }
             else{
                 cout << " " << '#' << " ";
             }
         }
         cout << '\n';
     }
}

void Rectangle::square(void) {
    const int x = 0, y = 1;
    if (fabs (point4[y] - point1[y]) == fabs (point2[x] - point1[x])) cout << "The rectangle is a square.\n\n";
}

void Rectangle::setFillCharacter(std::string c) {
    fillChar = c;
}

void Rectangle::setPerimeterCharacter(std::string c) {
    periChar=c;
}

bool Rectangle::isValid(void) {
    return valid;
}

void Rectangle::setValid(bool v) {
    valid = v;
}
