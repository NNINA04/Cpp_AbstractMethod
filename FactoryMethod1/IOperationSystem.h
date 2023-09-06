#pragma once

#include "pch.h"

class IOperationSystem
{
public:
    virtual string InstallOperationSystem() const = 0;
};