#pragma once
#include <memory>
#include "IdentifiedObject.h"

class ConnectivityNode;

class Terminal : public IdentifiedObject
{
	std::shared_ptr<ConnectivityNode> m_node{ nullptr };

public:
	Terminal(const char *mRID, const char *name = "", const char *description = "");

	void setNode(std::shared_ptr<ConnectivityNode> node);
		
	~Terminal();
};

