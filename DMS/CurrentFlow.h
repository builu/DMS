#pragma once

#include "UnitMultiplier.h"
#include "UnitSymbol.h"

class CurrentFlow
{
private:

    double m_value{ 0 };
    UnitSymbol m_unit{ UnitSymbol::A };
    UnitMultiplier m_multiplier{ UnitMultiplier::none };

public:

    CurrentFlow() = default;
    CurrentFlow(double value, UnitSymbol unit = UnitSymbol::A, UnitMultiplier multiplier = UnitMultiplier::none);

};
