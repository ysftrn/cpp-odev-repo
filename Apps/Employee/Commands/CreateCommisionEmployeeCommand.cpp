//
// Created by roy on 17.12.2020.
//

#include "CreateCommisionEmployeeCommand.h"
#include "iostream"
using namespace std;
void CreateCommisionEmployeeCommand::Execute()  {
    cout << " !!!!!!!!! From This Command You can't use directly Execute function you need to use ExecuteAndReturn function !!!!!!!!!!!!!" << endl;

}

BasePlusCommissionEmployee CreateCommisionEmployeeCommand::ExecuteAndReturn() const {

    string first, last, ssn;
    float sales, rate;

    cout << "First Name = " ;
    cin >> first ;
    cout << "Last Name = " ;
    cin >> last ;
    cout << "Social Number = " ;
    cin >> ssn ;
    cout << "Gross Sales = " ;
    cin >> sales ;
    cout << "Sales Rate = " ;
    cin >> rate ;

    BasePlusCommissionEmployee commissionEmployee( first, last, ssn, sales, rate );
    return commissionEmployee;

}
