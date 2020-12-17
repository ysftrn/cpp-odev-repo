//
// Created by roy on 17.12.2020.
//

#ifndef TRAIN_READEMPLOYEESFROMFILECOMMAND_H
#define TRAIN_READEMPLOYEESFROMFILECOMMAND_H

#include "../../../Core/Command.h"
#include "../Classes/BasePlusCommissionEmployee.h"
#include "list"

class ReadEmployeesFromFileCommand : public Command {
public:
    list<BasePlusCommissionEmployee> * employeeList;
public:
    ReadEmployeesFromFileCommand(list<BasePlusCommissionEmployee> & employeeList);
public:
    void Execute()  override;

};


#endif //TRAIN_READEMPLOYEESFROMFILECOMMAND_H
