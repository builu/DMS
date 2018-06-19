#include "DLoad.h"

using namespace std;

DLoad::DLoad(const char* name, std::shared_ptr<DPhase> phase, std::shared_ptr<DNode> node, double P, double Q) : DShunt{ name, phase, node }, m_maxP{ P }, m_maxQ{ Q } {}

std::string DLoad::toString() const
{
	std::string str{ DShunt::toString()  + "[" + to_string(m_maxP) + "][" + to_string(m_maxQ) + "]" };

	return str;
}