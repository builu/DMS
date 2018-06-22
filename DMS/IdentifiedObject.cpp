#include "IdentifiedObject.h"
#include <string>

using namespace std;

IdentifiedObject::IdentifiedObject(const char *mRID, const char *name, const char *description) : m_mRID{ mRID }, m_name{ name }, m_description{ description }
{
    if (0 == strcmp(name, "")) {
        m_name = mRID;
    }
}

string IdentifiedObject::toString() const
{
	string str{ "[mRID:" + m_mRID + "]" + "[name:" + m_name + "]" + "[description:" + m_description + "]" };

	return str;
}

void IdentifiedObject::setDesciption(const char *description)
{
    m_description = description;
}


ostream& operator<< (ostream& os, const IdentifiedObject &id)
{
	os << id.toString();

	return os;
}

IdentifiedObject::~IdentifiedObject()
{
}


