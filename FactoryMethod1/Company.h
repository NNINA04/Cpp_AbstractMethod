#pragma once

#include "pch.h"

class Company
{
public:
    virtual IOperationSystem* OperationSystem() const = 0; // Factory Method

    void MakeComputer() const
    {
        IOperationSystem* product = this->OperationSystem();
        cout << "I proceed an " + product->InstallOperationSystem() << endl;
        delete product;
    }
};
