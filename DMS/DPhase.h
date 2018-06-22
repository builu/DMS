#pragma once
#include <string>
#include <map>
#include "PhaseCode.h"

class DPhase
{
	friend std::ostream& operator<< (std::ostream& os, const DPhase &);

private:

	DPhaseCode m_phaseCode{ DPhaseCode::ABCN };

public:

	DPhase(const char*);

	std::string toString() const;

	static bool isValid(const char*str) { return (String2PhaseCode.find(str) == String2PhaseCode.end()) ? false : true; };
};

