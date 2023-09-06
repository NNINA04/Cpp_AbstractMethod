#pragma once

#include "pch.h"

class Windows : public IOperationSystem
{
public:
    string InstallOperationSystem() const override
    {
        return "Installing Windows operation system";
    }
};