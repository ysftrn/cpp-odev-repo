//
// Created by roy on 23.11.2020.
//
#ifndef HOMEWORKTEMPLATE_INITIALIZABLEHOMEWORKLIST_H
#define HOMEWORKTEMPLATE_INITIALIZABLEHOMEWORKLIST_H

#include "../Core/HomeworkInterface.h"
#include <list>


class InitializableHomeworkList {
    public:
        static std::list<HomeworkInterface*> runList();
};


#endif //HOMEWORKTEMPLATE_INITIALIZABLEHOMEWORKLIST_H
