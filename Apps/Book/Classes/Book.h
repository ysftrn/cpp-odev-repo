//
// Created by roy on 12.12.2020.
//

#ifndef TRAIN_BOOK_H
#define TRAIN_BOOK_H

#include "list"

/*
 *
 * Uniteler
 *      -> Sayfa
 *              -> Sorular(Cevaplar)
 *
 *
 *
 *
 * */

#include "../../../States/Book/BookState.h"
#include "Section.h"

class Book  {

private:
    BookState * bookInformation;
    list<Section> sectionList;

public:
    Book(BookState &bookInfo);

public:
    virtual list<Section> getSectionList() const {
        return sectionList;
    }

    virtual void addSection(Section &section){
        this->sectionList.push_back(section);
    }

};


#endif //TRAIN_BOOK_H
