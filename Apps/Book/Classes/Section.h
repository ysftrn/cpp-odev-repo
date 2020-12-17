//
// Created by roy on 12.12.2020.
//

#ifndef TRAIN_SECTION_H
#define TRAIN_SECTION_H

#include "iostream"
#include "list"
#include "../../../States/Book/SectionState.h"
#include "Page.h"

using namespace std;

class Section {
private:
    SectionState * sectionInformation;
    list<Page> pagelist;
public:
    Section(SectionState &sectionInfo);
public:
    virtual list<Page> getPageList() const {
        return pagelist;
    };

    virtual void addPage(Page &page){
        this->pagelist.push_back(page);
    }
};


#endif //TRAIN_SECTION_H
