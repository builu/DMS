#pragma once
#include "ConductingEquipment.h"

class DSwitch : public ConductingEquipment
{
private:

	double m_iRating{ 0 };

public:

	DSwitch(const char *name, std::shared_ptr<DPhase> phase, std::shared_ptr<DNode> node1, std::shared_ptr<DNode> node2, double iRating);

	std::string toString() const override;
};

