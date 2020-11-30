cmake_minimum_required(VERSION 3.17)
project(HomeworkTemplate)

set(CMAKE_CXX_STANDARD 14)

add_executable(HomeworkTemplate main.cpp Core/HomeworkInterface.cpp Core/HomeworkInterface.h config/InitializableHomeworkList.cpp config/InitializableHomeworkList.h Classes/Vector3D.cpp Classes/Vector3D.h Homeworks/HomeworkOne.cpp Homeworks/HomeworkOne.h Homeworks/HomeworkTwo.cpp Homeworks/HomeworkTwo.h Classes/MyContainer.h)