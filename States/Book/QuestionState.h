//
// Created by roy on 12.12.2020.
//

#ifndef TRAIN_QUESTIONSTATE_H
#define TRAIN_QUESTIONSTATE_H

#include "iostream"
#include "../../Core/SharedState.h"

using namespace std;

class QuestionState : public SharedState {
public:
    string questionText;

};


#endif //TRAIN_QUESTIONSTATE_H
