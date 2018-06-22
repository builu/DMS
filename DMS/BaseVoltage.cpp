#include "BaseVoltage.h"
#include "Voltage.h"

BaseVoltage::BaseVoltage(const char *mRID, const Voltage& vv, bool isDC) : IdentifiedObject{ mRID }, m_nominalVoltage{ vv }, m_isDC{ isDC }
{

}

