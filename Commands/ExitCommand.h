//
// Created by roy on 12.12.2020.
//

#ifndef TRAIN_EXITCOMMAND_H
#define TRAIN_EXITCOMMAND_H

#include "../Core/Command.h"
#include "../Core/App.h"

class ExitCommand: public Command {

public:
    ExitCommand(App &app);

public:
    void Execute() const override;


};


#endif //TRAIN_EXITCOMMAND_H
