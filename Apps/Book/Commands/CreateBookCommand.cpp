//
// Created by roy on 16.12.2020.
//

#include "CreateBookCommand.h"
#include "../Classes/Book.h"

void CreateBookCommand::Execute()  {
    if(&app != nullptr) {
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

CreateBookCommand::CreateBookCommand(App &app){
    this->app = &app;
}
