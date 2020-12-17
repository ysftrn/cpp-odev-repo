//
// Created by roy on 12.12.2020.
//

#include "BookApp.h"

#include "../../Commands/ExitCommand.h"
#include "Commands/CreateBookCommand.h"
#include "iostream"

#include "Classes/Book.h"

using namespace std;

int BookApp::run() {
    App::run();
    cout << "Book App started " << endl;
    continue_reading = true;

    char commandText;

    while(continue_reading){

        cout << "For create book press      'c'"<< endl;
        cout << "Choose (x for exit on BookApp) = ";
        cin >>  commandText;
        cout << endl;

        if(commandText == 'x'){
            ExitCommand(*this).Execute();
        }

        if(commandText == 'c'){
            CreateBookCommand(*this).Execute();
        }

    }

    return 0;
}
