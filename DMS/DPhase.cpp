#include "DPhase.h"

DPhase::DPhase(const char* name) : m_name{ name } {};

std::ostream& operator<< (std::ostream& os, const DPhase &ph)
{
	os << ph.toString();
	return os;
}

std::string DPhase::toString() const
{
	std::string str{ "[" + m_name + "]" };

	return str;
}
