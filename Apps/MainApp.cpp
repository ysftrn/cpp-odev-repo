//
// Created by roy on 12.12.2020.
//


#include "iostream"


#include "MainApp.h"
#include "Book/BookApp.h"

#include "../Commands/ExitCommand.h"
#include "../Commands/RunAppCommand.h"
#include "Employee/EmployeeApp.h"
#include "LorentzVector/LorentzVectorApp.h"
#include "ComplexNumber/ComplexNumberApp.h"
#include "Rectangle/RectangleApp.h"


using namespace std;

int MainApp::run(){
    App::run();
    continue_reading = true;

    char commandText;

    while(continue_reading){

        cout << "For run Book app press     'b'"<< endl;
        cout << "For run Employee app press   'c'"<< endl;
        cout << "For run Lorent Vector app press   'l'"<< endl;
        cout << "For run ComplexNumber app press   'k'"<< endl;
        cout << "For run Rectangle app press   'r'"<< endl;
        cout << "Choose App (x for exit on BookApp) = ";
        cin >>  commandText;
        cout << endl;

        if(commandText == 'x'){
            ExitCommand(*this).Execute();
        }

        if(commandText == 'c'){
            RunAppCommand(*new EmployeeApp()).Execute();
        }

        if(commandText == 'b'){
            RunAppCommand(*new BookApp()).Execute();
        }

        if(commandText == 'k'){
            RunAppCommand(*new ComplexNumberApp()).Execute();
        }

        if(commandText == 'l'){
            RunAppCommand(*new LorentzVectorApp()).Execute();
        }

        if(commandText == 'r'){
            RunAppCommand(*new RectangleApp()).Execute();
        }

    }

    return 0;
}
