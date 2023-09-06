#pragma once

#include "pch.h"

class IOS : public IOperationSystem
{
public:
    string InstallOperationSystem() const override
    {
        return "Installing IOS operation system";
    }
};