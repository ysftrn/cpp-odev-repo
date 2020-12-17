//
// Created by roy on 12.12.2020.
//

#include "RunAppCommand.h"

void RunAppCommand::Execute()  {
    if(&app != nullptr) {
        app->clearTerminalScreen();
        app->run();
    }
}

RunAppCommand::RunAppCommand(App &app){
    this->app = &app;
}
