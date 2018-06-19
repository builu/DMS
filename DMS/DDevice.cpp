#include "DDevice.h"


DDevice::DDevice(const char *name, std::shared_ptr<DPhase> phase) : m_name{ name }, m_phase{ phase } {};

std::string DDevice::toString() const
{
	std::string str {"[" + m_name + "]" + m_phase->toString() };

	return str;
}

std::ostream& operator<< (std::ostream& os, const DDevice &de)
{
	os << de.toString();
	return os;
}
