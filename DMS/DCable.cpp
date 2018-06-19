#include "DCable.h"

using namespace std;

DCable::DCable(const char *name, std::shared_ptr<DPhase> phase, std::shared_ptr<DNode> node1, std::shared_ptr<DNode> node2, double length) :
	DBranch{ name, phase, node1, node2 }, m_length{ length } {};

std::string DCable::toString() const
{
	std::string str{ DBranch::toString() + "[" + to_string(m_length) + "]" };

	return str;
}