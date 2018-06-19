#include "DBranch.h"


DBranch::DBranch(const char* name, std::shared_ptr<DPhase> phase, std::shared_ptr<DNode> node1, std::shared_ptr<DNode> node2) : DDevice{ name, phase }, m_node_1{ node1 }, m_node_2{ node2 } {}

std::string DBranch::toString() const
{
	std::string str{ DDevice::toString() + m_node_1->toString() + m_node_2->toString() };

	return str;
}