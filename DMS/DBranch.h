#pragma once
#include "DDevice.h"
#include "DNode.h"

class DBranch : public DDevice
{

private:

	std::shared_ptr<DNode> m_node_1;
	std::shared_ptr<DNode> m_node_2;

public:

	DBranch(const char* name, std::shared_ptr<DPhase> phase, std::shared_ptr<DNode> node1, std::shared_ptr<DNode> node2);

	std::string toString() const override;
};


