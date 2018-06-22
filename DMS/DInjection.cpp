#include "DInjection.h"

using namespace std;

DInjection::DInjection(const char* name, std::shared_ptr<DPhase> phase, std::shared_ptr<DNode> node) : DShunt{ name, phase, node } {}

string DInjection::toString() const
{
	std::string str{ DShunt::toString() };

	return str;
}