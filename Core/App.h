//
// Created by roy on 12.12.2020.
//

#ifndef TRAIN_APP_H
#define TRAIN_APP_H


class App {

protected:
    bool continue_reading;

public:
    ~App();
public:
    virtual int run();
    int exitApp();
    void clearTerminalScreen();
};


#endif //TRAIN_APP_H
