#include "ConductingEquipment.h"
#include "PhaseCode.h"

ConductingEquipment::ConductingEquipment(const char *mRID, const char *name, PhaseCode phases, std::shared_ptr<BaseVoltage> baseVoltage) :
    Equipment{ mRID, name }, m_phases{ phases }, m_baseVoltage{ baseVoltage }
{

}

std::string ConductingEquipment::toString() const
{
    std::string str{ Equipment::toString() + "[" + PhaseSrv::toString(m_phases) + "]" };

    return str;
}

void ConductingEquipment::setBaseVoltage(std::shared_ptr<BaseVoltage> baseVoltage)
{
    m_baseVoltage = baseVoltage;
}

void ConductingEquipment::setTerminals(std::shared_ptr<Terminal> terminal_1, std::shared_ptr<Terminal> terminal_2)
{
    m_terminal_1 = terminal_1;
    m_terminal_2 = terminal_2;
}