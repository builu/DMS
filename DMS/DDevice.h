#pragma once
#include "DPhase.h"

class DDevice {

	friend std::ostream& operator<< (std::ostream& os, const DDevice &de);

private:
	std::string m_name;
	std::shared_ptr<DPhase> m_phase;

public:
	DDevice(const char *name, std::shared_ptr<DPhase> phase);

	virtual std::string toString() const;
};

