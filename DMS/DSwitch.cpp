#include "DSwitch.h"

using namespace std;

DSwitch::DSwitch(const char *name, shared_ptr<DPhase> phase, shared_ptr<DNode> node1, shared_ptr<DNode> node2, double iRating) :
	ConductingEquipment{ name, phase, node1, node2 }, m_iRating{ iRating } {};

string DSwitch::toString() const
{
	string str{ ConductingEquipment::toString() + "[" + to_string(m_iRating) + "]" };

	return str;
}