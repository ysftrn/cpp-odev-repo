//
// Created by roy on 25.11.2020.
//

#ifndef HOMEWORKTEMPLATE_MYCONTAINER_H
#define HOMEWORKTEMPLATE_MYCONTAINER_H


#include <iostream>

using namespace std;
template <class T>
class MyContainer {
    T element;
public:
    MyContainer(T arg) {element = arg;}
    T increase() {return ++element;}
};
template < > class MyContainer <char> {
    char element;public: MyContainer(char arg) {element = arg;}
    char uppercase() {
        if ((element >= 'a') && (element <= 'z')) element += 'A' - 'a';
        return element;
    }
    char lowercase() {
        if ((element >= 'A') && (element <= 'Z')) element -= 'A' - 'a';
        return element;
    }
};


#endif //HOMEWORKTEMPLATE_MYCONTAINER_H
