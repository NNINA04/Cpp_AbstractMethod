#pragma once

#include "pch.h"

class Apple : public Company
{
public:
    IOperationSystem* OperationSystem() const override
    {
        return new IOS();
    }
};
