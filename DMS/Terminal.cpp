#include "Terminal.h"
#include "ConnectivityNode.h"

using namespace std;

Terminal::Terminal(const char *mRID, const char *name, const char *description) : IdentifiedObject{ mRID, name, description }
{

}


Terminal::~Terminal()
{
}

void Terminal::setNode(std::shared_ptr<ConnectivityNode> node)
{
	if (m_node != nullptr) {
		m_node.reset();
	}
	m_node = node;
}
