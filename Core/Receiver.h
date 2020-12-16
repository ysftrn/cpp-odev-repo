//
// Created by roy on 12.12.2020.
//

#ifndef TRAIN_RECEIVER_H
#define TRAIN_RECEIVER_H
#include "Command.h"
#include "App.h"
class Receiver {

private:
    App * mainApp;

public:
    Receiver();
    ~Receiver();
    explicit Receiver(App &app);


public:
    static void Do(Command &cmd);
};


#endif //TRAIN_RECEIVER_H
