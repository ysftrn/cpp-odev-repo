//
// Created by roy on 12.12.2020.
//

#include "Receiver.h"
#include "iostream"

Receiver::Receiver(){
};

Receiver::Receiver(App &app){
    this->mainApp = &app;
}

void Receiver::Do(Command &cmd) {
    cmd.Execute();
}

Receiver::~Receiver() {
    std::cout << "Receiver: done" << std::endl;
};
