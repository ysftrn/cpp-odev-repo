//
// Created by roy on 12.12.2020.
//

#include "iostream"

#include "ComplexCommand.h"
#include "NextPageCommand.h"

void ComplexCommand::Execute() const {
    NextPageCommand * npc = new NextPageCommand();
    receiver->Do(*npc);
    std::cout << "ComplexCommand: See, I can do simple things like printing" << std::endl;
}

ComplexCommand::ComplexCommand(Receiver &rcv) {
    if(&rcv == nullptr){
        receiver = new Receiver();
    }
    else receiver = &rcv;
}


ComplexCommand::~ComplexCommand(){
    std::cout << "ComplexCommand: done" << std::endl;
}
