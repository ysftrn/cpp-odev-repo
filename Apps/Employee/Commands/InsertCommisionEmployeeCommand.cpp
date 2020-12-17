//
// Created by roy on 17.12.2020.
//

#include "InsertCommisionEmployeeCommand.h"
#include <fstream>
#include "iostream"

void InsertCommisionEmployeeCommand::Execute()  {

    if(this->baseCommisionEmployee != nullptr){
        std::ofstream outfile;

        outfile.open("employees.txt", std::ios_base::app); // append instead of overwrite
        outfile << this->baseCommisionEmployee->getFirstName() << " "
                << this->baseCommisionEmployee->getLastName() << " "
                << this->baseCommisionEmployee->getSocialSecurityNumber() << " "
                << this->baseCommisionEmployee->getGrossSales() << " "
                << this->baseCommisionEmployee->getCommissionRate() << "\n";

        std::cout << "Successfully added to employees.txt file" << std::endl;
    }

    this->baseCommisionEmployee = nullptr;
}

InsertCommisionEmployeeCommand::InsertCommisionEmployeeCommand(BasePlusCommissionEmployee &baseCommisionEmployee){
    this->baseCommisionEmployee = &baseCommisionEmployee;
}