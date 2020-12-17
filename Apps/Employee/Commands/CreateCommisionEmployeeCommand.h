//
// Created by roy on 17.12.2020.
//

#ifndef TRAIN_CREATECOMMISIONEMPLOYEECOMMAND_H
#define TRAIN_CREATECOMMISIONEMPLOYEECOMMAND_H

#include "../../../Core/Command.h"
#include "../Classes/BasePlusCommissionEmployee.h"
class CreateCommisionEmployeeCommand : public Command {
public:
    void Execute()  override;
    BasePlusCommissionEmployee ExecuteAndReturn() const;
};


#endif //TRAIN_CREATECOMMISIONEMPLOYEECOMMAND_H
