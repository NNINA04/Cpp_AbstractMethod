#pragma once

#include "pch.h"

class Microsoft : public Company
{
public:
    IOperationSystem* OperationSystem() const override
    {
        return new Windows();
    }
};