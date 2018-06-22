#pragma once

#include "UnitMultiplier.h"
#include "UnitSymbol.h"

class Voltage
{
    double m_value{ 0 };
    UnitSymbol m_unit{ UnitSymbol::V };
    UnitMultiplier m_multiplier{ UnitMultiplier::none };

public:
    Voltage() = default;
    Voltage(double value, UnitSymbol unit = UnitSymbol::V, UnitMultiplier multiplier = UnitMultiplier::none);
    
};

