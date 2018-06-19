#pragma once
#include <string>

class DPhase 
{
	friend std::ostream& operator<< (std::ostream& os, const DPhase &);

private:
	std::string m_name;

public:
	DPhase(const char* name);
	std::string toString() const;
};



