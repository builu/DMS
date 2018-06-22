#pragma once
#include "ConductingEquipment.h"

class Conductor : public ConductingEquipment
{
private:

	double m_length{ 1 };

public:

	Conductor(const char *name, std::shared_ptr<DPhase> phase, std::shared_ptr<DNode> node1, std::shared_ptr<DNode> node2, double length);

	std::string toString() const override;
};

