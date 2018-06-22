#include "Equipment.h"
#include <string>

using namespace std;

Equipment::Equipment(const char *mRID, const char *name, bool normalIlyInService) : 
    IdentifiedObject {mRID, name}, m_normalIlyInService {normalIlyInService}
{

}

void Equipment::setNormalIlyInService(bool normalIlyInService) 
{ 
    m_normalIlyInService = normalIlyInService; 
}

string Equipment::toString() const
{
    string str{ IdentifiedObject::toString() + "[normalIlyInService" + to_string(m_normalIlyInService) + "]" };

    return str;
}

ostream& operator<< (ostream& os, const Equipment &de)
{
    os << de.toString();

    return os;
}
