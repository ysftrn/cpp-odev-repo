//
// Created by roy on 16.12.2020.
//

#include "CreateBookCommand.h"
#include "../Book/Book.h"

void CreateBookCommand::Execute() const {
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
