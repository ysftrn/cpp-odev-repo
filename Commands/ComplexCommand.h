//
// Created by roy on 12.12.2020.
//

#ifndef TRAIN_COMPLEXCOMMAND_H
#define TRAIN_COMPLEXCOMMAND_H

#include "../Core/Command.h"
#include "../Core/Receiver.h"

class ComplexCommand : public Command {

public:
    Receiver * receiver;

public:
    ComplexCommand(Receiver &rcv);
    ~ComplexCommand();
public:
    void Execute() const override;
};


#endif //TRAIN_COMPLEXCOMMAND_H
