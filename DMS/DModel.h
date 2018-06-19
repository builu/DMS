#pragma once
#include <memory>
#include <map>
#include "DDevice.h"
#include "DNode.h"
#include "DPhase.h"

class DModel
{
	friend std::ostream& operator<< (std::ostream& os, const DModel &md);

private:

	static std::map<std::string, std::shared_ptr<DDevice>> m_devices;
	static std::map<std::string, std::shared_ptr<DNode>> m_nodes;
	static std::map<std::string, std::shared_ptr<DPhase>> m_phases;

public:

	std::shared_ptr<DPhase> getPhase(const char* phStr);
	std::shared_ptr<DNode> getNode(const char* str);

	bool addLoad(const char* name, const char *phase, const char* nodeName, double P, double Q);
	bool addInjection(const char* name, const char *phase, const char* nodeName);
	bool addSwitch(const char* name, const char *phase, const char* nodeName1, const char* nodeName2, double iRating);
	bool addCable(const char* name, const char *phase, const char* nodeName1, const char* nodeName2, double length);
};




/*
class DModelCheck
{
public:
	static bool deviceExist(const std::string &name) { return (DModel::m_devices.find(name) != DModel::m_devices.end()); };
};

;

class DModel
{
public:
	DModel();
	~DModel();
};
*/
