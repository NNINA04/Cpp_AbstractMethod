#pragma once

#include "pch.h"

class Company
{
public:
    IGPU* AssembleGPU()
    {
        IGPU* GPU = CreateGPU();
        GPU->Assemble();
        return GPU;
    }

    virtual IGPU* CreateGPU() = 0; // Factory Method - Pattern
};
