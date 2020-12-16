//
// Created by roy on 12.12.2020.
//

#ifndef TRAIN_COMMAND_H
#define TRAIN_COMMAND_H


class Command {

public:
    Command(){}
    virtual ~Command(){}

public:
    virtual void Execute() const = 0;

};


#endif //TRAIN_COMMAND_H
