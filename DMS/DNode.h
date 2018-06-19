#pragma once
#include <string>

class DNode {

	friend std::ostream& operator<< (std::ostream& os, const DNode &nd);

private:

	std::string m_name;

public:
	DNode(const char *name);

	std::string toString() const;
};

