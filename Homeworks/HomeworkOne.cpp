//
// Created by roy on 23.11.2020.
//

#include "HomeworkOne.h"
#include "../Classes/Vector3D.h"
#include <iostream>
#include <typeinfo>
using namespace std;
int HomeworkOne::runProgram() {


    Vector3D<int>* int_vectorInstance =  new Vector3D<int>(1,2,3);
    Vector3D<float>* float_vectorInstance = reinterpret_cast<Vector3D<float> *>(new Vector3D<float>(1.f, 2.f, 3.f));
    Vector3D<double> double_vectorInstance(1, 2, 3);
    Vector3D<double>* double_vectorInstanceWithPointer =  new Vector3D<double>(1,2,3);
    Vector3D<double>* crossProduct_double_vectorInstance = reinterpret_cast<Vector3D<double> *>(new Vector3D<double>(1.f, 2.f, 3.f));
    cout << "Int" << " Tipli Vektorün Büyüklüğü = " << int_vectorInstance->magnitude() << endl;
    int_vectorInstance->printComponents();
    cout << endl;
    cout << "Double" << " Tipli Vektorün Büyüklüğü = " << double_vectorInstance.magnitude() << endl;
    double_vectorInstance.printComponents();
    cout << endl;
    cout << "Float" << " Tipli Vektorün Büyüklüğü = " << float_vectorInstance->magnitude() << endl;
    float_vectorInstance->printComponents();
    cout << endl;
    (double_vectorInstance)*=3;
    int_vectorInstance->printComponents();
    cout << endl;
    cout << "Float" << " Tipli Vektorün Büyüklüğü 3 İle Çarpımından sonra  = " << double_vectorInstance.magnitude()  << endl;
    double_vectorInstance.printComponents();
    cout << endl;
    cout << "Float" << " Tipli Vektorün double_VectorInstance ile Nokta Carpımı  = " << crossProduct_double_vectorInstance->dotProduct(double_vectorInstance)  << endl;
    crossProduct_double_vectorInstance->printComponents();
    cout << endl;
    cout << "Float" << " Tipli Vektorün Büyüklüğü Double ile Cross Producttan sonra  = " << crossProduct_double_vectorInstance->magnitude()  << endl;
    crossProduct_double_vectorInstance->printComponents();
    cout << endl;

    crossProduct_double_vectorInstance->changeVariableValueInsideFunction(*double_vectorInstanceWithPointer,10);
    double_vectorInstanceWithPointer->printComponents();



    return 1;

};
