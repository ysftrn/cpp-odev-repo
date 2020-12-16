//
// Created by roy on 12.12.2020.
//

#ifndef TRAIN_QUESTION_H
#define TRAIN_QUESTION_H

#include "list"
#include "../States/Book/QuestionState.h"


class Question {
private:
    QuestionState * questionInformation;
    int answer;

public:
    Question(QuestionState &questionInfo);

public:
    virtual int getAnswer(){
        return answer;
    };
};


#endif //TRAIN_QUESTION_H