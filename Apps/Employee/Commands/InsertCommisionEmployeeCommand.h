//
// Created by roy on 17.12.2020.
//

#ifndef TRAIN_INSERTCOMMISIONEMPLOYEECOMMAND_H
#define TRAIN_INSERTCOMMISIONEMPLOYEECOMMAND_H

#include "../../../Core/Command.h"
#include "../Classes/BasePlusCommissionEmployee.h"

class InsertCommisionEmployeeCommand : public Command {
public:
    BasePlusCommissionEmployee * baseCommisionEmployee;
public:
    InsertCommisionEmployeeCommand(BasePlusCommissionEmployee &baseCommisionEmployee);
public:
    void Execute()  override;

};


#endif //TRAIN_INSERTCOMMISIONEMPLOYEECOMMAND_H
