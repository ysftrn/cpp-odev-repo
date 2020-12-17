//
// Created by roy on 17.12.2020.
//

#ifndef TRAIN_BASEPLUSCOMMISSIONEMPLOYEE_H
#define TRAIN_BASEPLUSCOMMISSIONEMPLOYEE_H


#include <string> // C++ standard string class

#include "CommissionEmployee.h" // CommissionEmployee class declaration

using namespace std;
class BasePlusCommissionEmployee: public CommissionEmployee {
public:
    BasePlusCommissionEmployee(const string & ,
                                   const string & ,
                                   const string & , double = 0.0,
                                   double = 0.0,
                                   double = 0.0);
public:
    void setBaseSalary(double); // set base salary
    double getBaseSalary() const; // return base salary
    double earnings() const; // calculate earnings
    void print() const; // print BasePlusCommissionEmployee object
private:
    double baseSalary; // base salary
}; // end class BasePlusCommissionEmployee


#endif //TRAIN_BASEPLUSCOMMISSIONEMPLOYEE_H
