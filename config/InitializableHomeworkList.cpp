//
// Created by roy on 23.11.2020.
//

#include "InitializableHomeworkList.h"
#include <list>
#include <iostream>
#include "../Homeworks//HomeworkOne.h"
#include "../Homeworks//HomeworkTwo.h"


std::list<HomeworkInterface *> InitializableHomeworkList::runList() {
    std::list<HomeworkInterface *> listOfHomework;
    //listOfHomework.emplace_back(new HomeworkOne());
    listOfHomework.emplace_back(new HomeworkTwo());
    int i = 1;
    std::list<HomeworkInterface*>::iterator it;
    for (  it = listOfHomework.begin(); it != listOfHomework.end(); it++)
    {
        std::cout << "\n --------------------------------------- ";
        std::cout << "\n "+std::to_string(i)+". Soru Çalıştırlıyor ................ ";
        std::cout << "\n ---------------------------------------  ";
        std::cout << "\n";
        (*it)->runProgram();
        i++;
    }
    return listOfHomework;
}
