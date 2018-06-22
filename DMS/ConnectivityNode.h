#pragma once
#include <vector>
#include "IdentifiedObject.h"

class Terminal;

/*
	Connectivity nodes are points where terminals of conducting equipment are connected together with zero
	impedance.
*/
class ConnectivityNode : public IdentifiedObject
{
private:

	std::vector<std::shared_ptr<Terminal>> m_terminals{}; // Terminals interconnect at the node.

public:

	ConnectivityNode(const char *mRID, const char *name, const char *description = "");

	bool addTerminal(std::shared_ptr<Terminal>);

	bool removeTerminal(const char *mRID);

	~ConnectivityNode();
};

