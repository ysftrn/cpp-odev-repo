//
// Created by roy on 12.12.2020.
//

#include "App.h"
#include "../Commands/ExitCommand.h"

#include "iostream"
#include <string>

using namespace std;


int App::run(){
    this->clearTerminalScreen();
    return 0;
}

int App::exitApp() {
    this->continue_reading = false;
    return this->continue_reading;
}

App::~App() {
    cout << "App Finished";
}

void App::clearTerminalScreen() {
    cout << string( 100, '\n' );
}
