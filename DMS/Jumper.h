#pragma once

#include "Switch.h"

class Jumper : public Switch
{
public:
    Jumper(const char *mRID, const char *name, PhaseCode phases, std::shared_ptr<BaseVoltage> baseVoltage, bool normalOpen);
    
};

