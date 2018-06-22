#include "DShunt.h"

using namespace std;

DShunt::DShunt(const char* name, shared_ptr<DPhase> phase, shared_ptr<DNode> node) : Equipment{ name, phase }, m_node{ node } {}

string DShunt::toString() const
{
	string str{ Equipment::toString() + m_node->toString() };

	return str;
}