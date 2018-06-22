#include "DPhase.h"

using namespace std;

DPhase::DPhase(const char* str)
{
	if (isValid(str))
	{
		m_phaseCode = String2PhaseCode.at(str);
	}
};

ostream& operator<< (ostream& os, const DPhase &ph)
{
	os << ph.toString();
	return os;
}

string DPhase::toString() const
{
	string str{ "[" + PhaseCode2String.at(m_phaseCode) + "]" };

	return str;
}
