//
// Created by roy on 12.12.2020.
//

#include "BookApp.h"

#include "../Commands/ExitCommand.h"
#include "iostream"

#include "../Book/Book.h"

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

            BookState bookOneInformation;
            bookOneInformation.name = "Linear Algebra";
            bookOneInformation.author = "Some one";
            bookOneInformation.totalPageNumber = 15;
            Book bookOne(bookOneInformation);

            SectionState sectionInformation;
            sectionInformation.name = "Section 1";
            Section sectionOne(sectionInformation);
            bookOne.addSection(sectionOne);

        }

    }

    return 0;
}
