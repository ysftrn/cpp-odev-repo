//
// Created by roy on 16.12.2020.
//

#ifndef TRAIN_CREATEBOOKCOMMAND_H
#define TRAIN_CREATEBOOKCOMMAND_H

#include "../Core/Command.h"
#include "../Core/App.h"

class CreateBookCommand : public Command {
public:
    App * app;
public:
    CreateBookCommand(App &app);

public:
    void Execute() const override;

};


#endif //TRAIN_CREATEBOOKCOMMAND_H
