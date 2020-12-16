//
// Created by roy on 12.12.2020.
//


#include "iostream"


#include "MainApp.h"
#include "MobileApp.h"
#include "BookApp.h"

#include "../Commands/ExitCommand.h"
#include "../Commands/RunAppCommand.h"


using namespace std;

int MainApp::run(){
    App::run();
    continue_reading = true;

    char commandText;

    while(continue_reading){

        cout << "For run book app press     'b'"<< endl;
        cout << "For run mobile app press   'm'"<< endl;
        cout << "Choose App (x for exit on BookApp) = ";
        cin >>  commandText;
        cout << endl;

        if(commandText == 'x'){
            ExitCommand(*this).Execute();
        }

        if(commandText == 'm'){
            RunAppCommand(*new MobileApp()).Execute();
        }

        if(commandText == 'b'){
            RunAppCommand(*new BookApp()).Execute();
        }

    }

    return 0;
}
