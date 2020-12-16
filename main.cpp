#include <iostream>
#include "Apps/MainApp.h"
int main() {
    MainApp * app = new MainApp();
    return app->run();
}
