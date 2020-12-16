//
// Created by roy on 12.12.2020.
//

#ifndef TRAIN_PAGE_H
#define TRAIN_PAGE_H
#include "list"
#include "../States/Book/PageState.h"
#include "Question.h"

class Page {
private:
    PageState * pageInformation;
    list<Question> questionList;
public:
    Page(PageState &pageInfo);

public:
    virtual list<Question> getQuestionList() const {
        return questionList;
    }

    virtual void addQuestion(Question &question){
        this->questionList.push_back(question);
    }

};


#endif //TRAIN_PAGE_H
