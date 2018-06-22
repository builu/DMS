#pragma once

#include "IdentifiedObject.h"
#include "Voltage.h"

class BaseVoltage : public IdentifiedObject
{
private:

    bool m_isDC;                  //If true, this is a direct current base voltage. False indicates alternating current.
    Voltage m_nominalVoltage;     // The equipment's base voltage

public:
    BaseVoltage(const char *mRID, const Voltage& vv, bool isDC );
};

