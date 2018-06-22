#include "Conductor.h"

using namespace std;

Conductor::Conductor(const char *name, std::shared_ptr<DPhase> phase, std::shared_ptr<DNode> node1, std::shared_ptr<DNode> node2, double length) :
	ConductingEquipment{ name, phase, node1, node2 }, m_length{ length } {};

std::string Conductor::toString() const
{
	std::string str{ ConductingEquipment::toString() + "[" + to_string(m_length) + "]" };

	return str;
}