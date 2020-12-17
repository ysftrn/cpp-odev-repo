//
// Created by roy on 17.12.2020.
//

#include "EmployeeApp.h"

#include "iostream"
#include "list"
#include "../../Commands/ExitCommand.h"
#include "Commands/CreateCommisionEmployeeCommand.h"
#include "Commands/InsertCommisionEmployeeCommand.h"
#include "Commands/ReadEmployeesFromFileCommand.h"
#include "Classes/BasePlusCommissionEmployee.h"

using namespace std;

int EmployeeApp::run() {
    App::run();
    cout << "Employee App started " << endl;
    continue_reading = true;

    list<BasePlusCommissionEmployee> employeeList;

    char commandText;

    while(continue_reading){

        cout << "For create Employee press and show 'c'"<< endl;
        cout << "For Read From File Employees press 'r'"<< endl;
        cout << "Choose (x for exit on EmployeeApp) = ";
        cin >>  commandText;
        cout << endl;

        if(commandText == 'x'){
            ExitCommand(*this).Execute();
        }

        if(commandText == 'c'){
            BasePlusCommissionEmployee basePlusCommission = CreateCommisionEmployeeCommand().ExecuteAndReturn();
            InsertCommisionEmployeeCommand(basePlusCommission).Execute();
        }

        if(commandText == 'r'){
            ReadEmployeesFromFileCommand(employeeList).Execute();

            for( auto const& l : employeeList ) {
                cout << l.getFirstName() << l.getLastName() << endl;
            }
        }

    }

    return 0;
}
