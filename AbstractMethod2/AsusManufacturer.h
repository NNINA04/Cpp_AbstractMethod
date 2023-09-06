#pragma once

#include "pch.h"

class AsusManufacturer : public Company
{
public:
    virtual IGPU* CreateGPU()
    {
        return new AsusGPU();
    }
};
