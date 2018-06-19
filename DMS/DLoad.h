#pragma once
#include "DShunt.h"

class DLoad : public DShunt
{
private:
	double m_maxP{ 0 };
	double m_maxQ{ 0 };

public:
	DLoad(const char* name, std::shared_ptr<DPhase> phase, std::shared_ptr<DNode> node, double P, double Q);

	std::string toString() const override;
};


