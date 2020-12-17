//
// Created by roy on 17.12.2020.
//

#include "ReadEmployeesFromFileCommand.h"
#include <fstream>
#include "string.h"
#include "iostream"

#include "../Classes/BasePlusCommissionEmployee.h"


void ReadEmployeesFromFileCommand::Execute()  {

    std::ifstream file("employees.txt");
    if (file.is_open()) {
        std::string line;

        this->employeeList->clear();

        while (std::getline(file, line)) {


            // using printf() in all tests for consistency
            string readedLine = line.c_str();


            if(readedLine.length() > 0){


                char str[readedLine.length()];
                strcpy(str, readedLine.c_str());

                // Returns first token
                char *token = strtok(str, "-");

                // Keep printing tokens while one of the
                // delimiters present in str[].

                int counter = 0;


                string first, last, ssn;
                float sales, rate;



                while (token != NULL)
                {
                    if(counter == 0){
                        first = token;
                    }

                    if(counter == 1){
                        last = token;
                    }

                    if(counter == 2){
                        ssn = token;
                    }

                    if(counter == 3){
                        sales = (float)atof(token);
                    }

                    if(counter == 4){
                        rate = (float)atof(token);
                    }


                    token = strtok(NULL, "-");
                    counter++;
                }

                free(token);


                BasePlusCommissionEmployee commissionEmployee( first, last, ssn, sales, rate );
                this->employeeList->push_back(commissionEmployee);
            }

        }
        file.close();
    }

    this->employeeList = nullptr;
}

ReadEmployeesFromFileCommand::ReadEmployeesFromFileCommand(list<BasePlusCommissionEmployee> & employeeList){
    this->employeeList = &employeeList;
}