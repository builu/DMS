#include "DModel.h"
#include "DLoad.h"
#include "DSwitch.h"
#include "DCable.h"
#include "DInjection.h"

using namespace std;

std::map<std::string, std::shared_ptr<DDevice>> DModel::m_devices;
std::map<std::string, std::shared_ptr<DNode>> DModel::m_nodes;
std::map<std::string, std::shared_ptr<DPhase>> DModel::m_phases;

shared_ptr<DPhase> DModel::getPhase(const char* phStr) 
{
	if (DModel::m_phases.find(phStr) == DModel::m_phases.end()) 
	{
		DModel::m_phases[phStr] = make_shared<DPhase>(phStr);
	}
	return m_phases[phStr];
}

std::shared_ptr<DNode> DModel::getNode(const char* str)
{
	if (m_nodes.find(str) == m_nodes.end()) 
	{
		m_nodes[str] = make_shared<DNode>(str);
	}
	return m_nodes[str];
}

bool DModel::addLoad(const char* name, const char *phase, const char* nodeName, double P, double Q)
{
	if (m_devices.find(name) != m_devices.end())
	{
		return false;
	}
	auto pp = getPhase(phase);
	auto nn = getNode(nodeName);

	m_devices[name] = make_shared<DLoad>(name, pp, nn, P, Q);

	return true;
}

bool DModel::addInjection(const char* name, const char *phase, const char* nodeName)
{
	if (m_devices.find(name) != m_devices.end())
	{
		return false;
	}
	auto pp = getPhase(phase);
	auto nn = getNode(nodeName);

	m_devices[name] = make_shared<DInjection>(name, pp, nn);

	return true;
}

bool DModel::addSwitch(const char* name, const char *phase, const char* nodeName1, const char* nodeName2, double iRating)
{
	if (m_devices.find(name) != m_devices.end())
	{
		return false;
	}
	auto pp = getPhase(phase);
	auto nn1 = getNode(nodeName1);
	auto nn2 = getNode(nodeName2);

	m_devices[name] = make_shared<DSwitch>(name, pp, nn1, nn2, iRating);

	return true;
}

bool DModel::addCable(const char* name, const char *phase, const char* nodeName1, const char* nodeName2, double length)
{
	if (m_devices.find(name) != m_devices.end())
	{
		return false;
	}
	auto pp = getPhase(phase);
	auto nn1 = getNode(nodeName1);
	auto nn2 = getNode(nodeName2);

	m_devices[name] = make_shared<DCable>(name, pp, nn1, nn2, length);

	return true;
}


std::ostream& operator<< (std::ostream& os, const DModel &md)
{
	if (md.m_phases.size() > 0) {
		os << "Phases (" << md.m_phases.size() << ")" << endl;
		for (auto ii = md.m_phases.begin(); ii != md.m_phases.end(); ++ii)
		{
			os << *(ii->second);
		}
		os << endl << endl;
	}

	if (md.m_nodes.size() > 0) {
		os << "Nodes (" << md.m_nodes.size() << ")" << endl;
		for (auto ii = md.m_nodes.begin(); ii != md.m_nodes.end(); ++ii)
		{
			os << *(ii->second);
		}
		os << endl << endl;
	}

	if (md.m_devices.size() > 0) {
		os << "Devices (" << md.m_devices.size() << ")" << endl;
		for (auto ii = md.m_devices.begin(); ii != md.m_devices.end(); ++ii)
		{
			os << *(ii->second) << endl;
		}
		os << endl;
	}

	return os;
}