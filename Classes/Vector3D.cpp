//
// Created by roy on 23.11.2020.
//

#include "Vector3D.h"
#include <math.h>
#include <iostream>
using namespace std;

template<class VT> void Vector3D<VT>::normalize()
{
    double mag = magnitude();
    this->x/=mag;
    this->y/=mag;
    this->z/=mag;
}

template<class VT> double Vector3D<VT>::magnitude()
{
    return sqrt(this->x*this->x+this->y*this->y+this->z*this->z);
}

template<class VT> double Vector3D<VT>::length()
{
    return this->magnitude();
}

template<class VT> Vector3D<VT> Vector3D<VT>::operator+=(const Vector3D<VT> &w)
{
    x = this->x + w.x;
    y = this->y + w.y;
    z = this->z + w.z;
    return Vector3D(this->x , this->y , this->z );
}

template<class VT> Vector3D<VT> Vector3D<VT>::operator*=(const Vector3D<VT> &w)
{
    this->x = this->x * w.x;
    this->y = this->y * w.y;
    this->z = this->z * w.z;
    return Vector3D(this->x , this->y , this->z );
}

template<class VT> Vector3D<VT> Vector3D<VT>::operator*=(const double &w)
{
    this->x = this->x * w;
    this->y = this->y * w;
    this->z = this->z * w;
    return Vector3D(this->x , this->y , this->z );

}

template<class VT> Vector3D<VT> Vector3D<VT>::operator/=(const Vector3D<VT> &w)
{
    this->x = this->x / w.x;
    this->y = this->y / w.y;
    this->z = this->z / w.z;
    return Vector3D(this->x , this->y , this->z );
}

template<class VT> Vector3D<VT> Vector3D<VT>::operator/=(const double &w)
{
    this->x = this->x / w;
    this->y = this->y / w;
    this->z = this->z / w;
    return Vector3D(this->x , this->y , this->z );
}

template<class VT> Vector3D<VT> Vector3D<VT>::operator==(const Vector3D<VT> &w)
{
    x = w.x;
    y = w.y;
    z = w.z;
    return Vector3D(this->x , this->y , this->z );
}



template<class VT> Vector3D<VT> Vector3D<VT>::crossProduct(const Vector3D<VT> &w)
{
    Vector3D temp = *this;

    temp.x = this->y * w.z - this->z * w.y;
    temp.y = this->z * w.x - this->x * w.z;
    temp.z = this->x * w.y - this->y * w.x;

    return temp;
}

template<class VT> Vector3D<VT>::Vector3D(VT a, VT b, VT c) {
    x = a;
    y = b;
    z = c;
}

template<class VT>
Vector3D<VT>::Vector3D() {

}


template<class VT>
void Vector3D<VT>::printComponents() {
    cout << this->x << "i," ;
    cout << this->y << "j," ;
    cout << this->z << "k," ;

}

template<class VT>
double Vector3D<VT>::dotProduct(Vector3D w) {
    Vector3D temp = (*this);
    temp *= w;
    return temp.x + temp.y + temp.z;
}

template<class VT>
Vector3D<VT>::~Vector3D() {

}

template<class VT>
void Vector3D<VT>::changeVariableValueInsideFunction(Vector3D &w,const VT & changeWithThis) {
    w.x = changeWithThis;
    w.y = changeWithThis;
    w.z = changeWithThis;
}


template class Vector3D<int>;
template class Vector3D<double>;
template class Vector3D<float>;

