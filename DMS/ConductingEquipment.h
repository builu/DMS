#pragma once
#include "Equipment.h"
#include "PhaseCode.h"
#include "Terminal.h"

/*
The parts of the power system that are designed to carry current or that are conductively connected
therewith.
*/

class ConductingEquipment : public Equipment
{

private:

    PhaseCode m_phases{ PhaseCode::ABCN }; // Describes the phases carried by a conducting equipment

    std::shared_ptr<BaseVoltage> m_baseVoltage;

    std::shared_ptr<Terminal> m_terminal_1{ nullptr };
    std::shared_ptr<Terminal> m_terminal_2{ nullptr };

public:

	ConductingEquipment(const char *mRID, const char *name, PhaseCode phases = PhaseCode::ABCN, std::shared_ptr<BaseVoltage> baseVoltage = nullptr);

    void setBaseVoltage(std::shared_ptr<BaseVoltage> baseVoltage);

    void setTerminals(std::shared_ptr<Terminal> terminal_1, std::shared_ptr<Terminal> terminal_2 = nullptr);
  
    std::string toString() const override;
};


