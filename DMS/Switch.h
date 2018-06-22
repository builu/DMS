#pragma once

#include "ConductingEquipment.h"

class Switch : public ConductingEquipment
{
private:

    bool m_normalOpen; 

public:

    Switch(const char *mRID, const char *name, PhaseCode phases, std::shared_ptr<BaseVoltage> baseVoltage, bool normalOpen);

};

