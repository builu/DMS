#include "Switch.h"


Switch::Switch(const char *mRID, const char *name, PhaseCode phases, std::shared_ptr<BaseVoltage> baseVoltage, bool normalOpen) :
    ConductingEquipment{mRID, name, phases, baseVoltage}, m_normalOpen {normalOpen}
{
}

