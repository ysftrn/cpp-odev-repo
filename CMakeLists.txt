cmake_minimum_required(VERSION 3.17)
project(Train)

set(CMAKE_CXX_STANDARD 14)

add_executable(Train main.cpp Core/App.cpp Core/App.h Core/Command.cpp Core/Command.h Core/FlyWeight.cpp Core/FlyWeight.h Core/Receiver.cpp Core/Receiver.h Core/SharedState.cpp Core/SharedState.h Book/Book.cpp Book/Book.h Commands/NextPageCommand.cpp Commands/NextPageCommand.h Commands/ComplexCommand.cpp Commands/ComplexCommand.h Commands/ExitCommand.cpp Commands/ExitCommand.h Apps/BookApp.cpp Apps/BookApp.h Apps/MobileApp.cpp Apps/MobileApp.h Apps/MainApp.cpp Apps/MainApp.h Commands/RunAppCommand.cpp Commands/RunAppCommand.h Book/Section.cpp Book/Section.h Book/Page.cpp Book/Page.h Book/Question.cpp Book/Question.h States/Book/BookState.cpp States/Book/BookState.h States/Book/SectionState.cpp States/Book/SectionState.h States/Book/PageState.cpp States/Book/PageState.h States/Book/QuestionState.cpp States/Book/QuestionState.h)