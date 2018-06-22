#include "CompositeSwitch.h"

CompositeSwitch::CompositeSwitch(const char *mRID, const char *name, std::string type) :
    Equipment{ mRID, name }, m_type{ type }, m_switches{}
{
}

