//
// Created by roy on 17.12.2020.
//

#ifndef TRAIN_COMMISSIONEMPLOYEE_H
#define TRAIN_COMMISSIONEMPLOYEE_H

#include <string> // C++ standard string classusing

using namespace std;
class CommissionEmployee {
public:
    CommissionEmployee(const string &,
                       const string &,
                       const string &, double = 0.0,
                       double = 0.0);

    void setFirstName(const string &); // set first namestring getFirstName() const;
    // return first namevoid
    void setLastName(const string &);

    // set last name
    string getFirstName() const;
    // set last name
    string getLastName() const;

    // return last name
    void setSocialSecurityNumber(const string &);

    // set SSN
    string getSocialSecurityNumber() const;

    // return SSN
    void setGrossSales(double);

    // set gross sales amount
    double getGrossSales() const; // return gross sales amount
    void setCommissionRate(double); // set commission rated
    double getCommissionRate() const; // return commission rate
    double earnings() const; // calculate earnings
    void print() const; // print CommissionEmployee object
private:
    string firstName;
    string lastName;
    string socialSecurityNumber;
    double grossSales; // gross weekly sales
    double commissionRate; // commission percentage};
};

#endif //TRAIN_COMMISSIONEMPLOYEE_H
