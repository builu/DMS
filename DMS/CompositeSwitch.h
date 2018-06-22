#pragma once
#include <string>
#include <vector>
#include "Equipment.h"

/*
    A model of a set of individual Switches normally enclosed within the same cabinet and possibly with
    interlocks that restrict the combination of switch positions.
*/

class Switch;

class CompositeSwitch : public Equipment
{
private:

    std::string m_type; // An alphanumeric code that can be used as a reference to extra information

    std::vector<std::shared_ptr<Switch>> m_switches;

public:

    CompositeSwitch(const char *mRID, const char *name, std::string type);

};

