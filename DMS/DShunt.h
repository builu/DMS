#pragma once
#include "DNode.h"
#include "Equipment.h"

class DShunt : public Equipment
{
private:
	std::shared_ptr<DNode> m_node;

public:
	DShunt(const char* name, std::shared_ptr<DPhase> phase, std::shared_ptr<DNode> node);

	std::string toString() const override;
};


