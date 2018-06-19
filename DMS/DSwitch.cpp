#include "DSwitch.h"

using namespace std;

DSwitch::DSwitch(const char *name, std::shared_ptr<DPhase> phase, std::shared_ptr<DNode> node1, std::shared_ptr<DNode> node2, double iRating) :
	DBranch{ name, phase, node1, node2 }, m_iRating{ iRating } {};

std::string DSwitch::toString() const
{
	std::string str{ DBranch::toString() + "[" + to_string(m_iRating) + "]"};

	return str;
}