//
// Created by roy on 30.12.2020.
//

#include "ComplexNumberApp.h"

#include "iostream"
#include "../../Commands/ExitCommand.h"
#include "Classes/Complex.h"

using namespace std;

int ComplexNumberApp::run() {
    App::run();

    cout << "LorentzVector App started " << endl;
    continue_reading = true;

    char commandText;

    Complex b(1,7), c(9,2), d(1,7);
    b.printComplex();

    cout << "+";
    c.printComplex();
    cout << "=";
    b.addition(c);
    b.printComplex();
    cout << endl;
    b.setComplexNumber(10,1);
    b.setComplexNumber(11,1);
    b.printComplex();
    cout << endl;
    c.printComplex();
    b.substraction(c);
    b.printComplex();
    cout << endl;
    b.ComplexConjugates(b);
    b.printComplex();
    cout << endl;

    return 1;
}
