#pragma once
#include "DBranch.h"

class DSwitch : public DBranch
{
private:

	double m_iRating{ 0 };

public:

	DSwitch(const char *name, std::shared_ptr<DPhase> phase, std::shared_ptr<DNode> node1, std::shared_ptr<DNode> node2, double iRating);

	std::string toString() const override;
};

