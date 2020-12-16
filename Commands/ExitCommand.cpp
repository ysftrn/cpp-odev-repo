//
// Created by roy on 12.12.2020.
//

#include "ExitCommand.h"

void ExitCommand::Execute() const {
    if(&app != nullptr) {
        app->clearTerminalScreen();
        app->exitApp();
    }
}

ExitCommand::ExitCommand(App &app){
    this->app = &app;
}
