#include "DNode.h"

DNode::DNode(const char *name) : m_name{ name } {};

std::ostream& operator<< (std::ostream& os, const DNode &nd)
{
	os << nd.toString();
	return os;
}

std::string DNode::toString() const
{
	std::string str{ "[" + m_name + "]" };
	return str;
}


