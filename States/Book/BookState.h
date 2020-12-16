//
// Created by roy on 12.12.2020.
//

#ifndef TRAIN_BOOKSTATE_H
#define TRAIN_BOOKSTATE_H

#include "iostream"
#include "../../Core/SharedState.h"

using namespace std;

class BookState : public SharedState {
public:
    string name;
    string author;
    int totalPageNumber;
};


#endif //TRAIN_BOOKSTATE_H
