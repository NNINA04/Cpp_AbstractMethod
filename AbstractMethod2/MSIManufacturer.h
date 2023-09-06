#pragma once

#include "pch.h"

class MSIManufacturer : public Company
{
public:
    virtual IGPU* CreateGPU()
    {
        return new MsiGPU();
    }
};
