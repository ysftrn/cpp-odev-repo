//
// Created by roy on 12.12.2020.
//

#ifndef TRAIN_RUNAPPCOMMAND_H
#define TRAIN_RUNAPPCOMMAND_H

#include "../Core/Command.h"
#include "../Core/App.h"

class RunAppCommand : public Command{

public:
    RunAppCommand(App &app);

public:
    void Execute() const override;
};


#endif //TRAIN_RUNAPPCOMMAND_H
