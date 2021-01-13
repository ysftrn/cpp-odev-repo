//
// Created by roy on 6.01.2021.
//

#include "RectangleApp.h"

#include "iostream"
#include "list"
#include "../../Commands/ExitCommand.h"
#include "Classes/Rectangle.h"
#include "Classes/Cube.h"

using namespace std;
int RectangleApp::run() {
    cout << "Rectangle App started " << endl;
    continue_reading = true;
    char commandText;
    double xy1[2] =  {  20.0,   15.0  };
    double xy2[2] =  {  40.0,   15.0  };
    double xy3[2] =  {  40.0,   35.0  };
    double xy4[2] =  {  20.0,   35.0  };

    double xy5[2] =  {  10.0,   20.0  };
    double xy6[2] =  {  30.0,   20.0  };
    double xy7[2] =  {  30.0,   40.0  };
    double xy8[2] =  {  10.0,   40.0  };

    Cube cub(xy1, xy2, xy3, xy4, xy5, xy6, xy7, xy8, " . ", " x ");

    if(cub.isValid()){
        cub.draw();
    }


    char wait;
    cin >> wait;

    return 0;
}
