//
// Created by roy on 23.11.2020.
//

#ifndef HOMEWORKTEMPLATE_VECTOR3D_H
#define HOMEWORKTEMPLATE_VECTOR3D_H

template <class VT>
class Vector3D {
public:
    VT x, y,z;
    Vector3D();
    ~Vector3D();
    Vector3D(VT a , VT b, VT c);

    Vector3D operator += ( const Vector3D & w);
    Vector3D operator *=(const Vector3D & w);
    Vector3D operator *= (const double  & w);
    Vector3D operator /= (const Vector3D & w);
    Vector3D operator /= (const double  & w);
    Vector3D operator == (const Vector3D & w);

public:
    void printComponents();
    void changeVariableValueInsideFunction(Vector3D & w, const VT & changeWithThis );
public:
    void normalize();
    double magnitude();
    double length();
    double dotProduct(Vector3D w);
    Vector3D crossProduct(const Vector3D& );
};
#endif //HOMEWORKTEMPLATE_VECTOR3D_H
