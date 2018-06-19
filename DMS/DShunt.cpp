#include "DShunt.h"

DShunt::DShunt(const char* name, std::shared_ptr<DPhase> phase, std::shared_ptr<DNode> node) : DDevice{ name, phase }, m_node{ node } {}

std::string DShunt::toString() const
{
	std::string str{ DDevice::toString() + m_node->toString() };

	return str;
}