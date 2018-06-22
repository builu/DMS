#include <memory>
#include <algorithm>
#include "ConnectivityNode.h"
#include "Terminal.h"

using namespace std;

ConnectivityNode::ConnectivityNode(const char *mRID, const char *name, const char *description) : IdentifiedObject{ mRID, name, description }
{
}

ConnectivityNode::~ConnectivityNode()
{
}

bool ConnectivityNode::addTerminal(std::shared_ptr<Terminal> te)
{
	auto ii = find_if(begin(m_terminals), end(m_terminals), [te](const shared_ptr<Terminal>& ee) { return (ee->getMRID() == te->getMRID()); });
	if (ii != m_terminals.end()) {
		return false;
	}
	
	m_terminals.push_back(make_shared<Terminal>(*te));

	return true;
}

bool ConnectivityNode::removeTerminal(const char *mRID)
{
	auto ii = find_if(begin(m_terminals), end(m_terminals), [mRID](const shared_ptr<Terminal>& ee) { return (ee->getMRID() == mRID); });
	if (ii == m_terminals.end()) {
		return false;
	}
	else {
		ii = m_terminals.erase(ii);
		return true;
	}
}
