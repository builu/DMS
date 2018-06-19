#pragma once
#pragma once
#include "DShunt.h"

class DInjection : public DShunt
{
private:
	
public:
	DInjection(const char* name, std::shared_ptr<DPhase> phase, std::shared_ptr<DNode> node);

	std::string toString() const override;
};


