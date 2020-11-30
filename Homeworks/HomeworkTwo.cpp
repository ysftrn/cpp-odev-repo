//
// Created by roy on 25.11.2020.
//

#include "HomeworkTwo.h"
#include "../Classes/MyContainer.h"

int HomeworkTwo::runProgram() {
    MyContainer <int> myint(7);
    MyContainer <char> mychar('j');
    MyContainer <char> mychar2('F');
    cout << myint.increase() << endl;
    cout << mychar.uppercase() << endl;
    cout << mychar2.lowercase() << endl;
    return 0;
}
