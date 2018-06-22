#include <iostream>
#include <map>
#include <string>

#include "UnitMultiplier.h"

using namespace std;

const map<string, UnitMultiplier> String2UnitMultiplier
{
    { "none", UnitMultiplier::none },
    { "p", UnitMultiplier::p },
    { "n", UnitMultiplier::n },
    { "micro", UnitMultiplier::micro },
    { "m", UnitMultiplier::m },
    { "c", UnitMultiplier::c },
    { "d", UnitMultiplier::d },
    { "k", UnitMultiplier::k },
    { "M", UnitMultiplier::M },
    { "G", UnitMultiplier::G },
    { "T", UnitMultiplier::T }
};

const map<UnitMultiplier, const string> UnitMultiplier2String
{
    { UnitMultiplier::INVALID , "INVALID" },
    { UnitMultiplier::p , "" },
    { UnitMultiplier::n , "" },
    { UnitMultiplier::micro , "" },
    { UnitMultiplier::m , "" },
    { UnitMultiplier::c , "" },
    { UnitMultiplier::d , "" },
    { UnitMultiplier::k , "" },
    { UnitMultiplier::M , "" },
    { UnitMultiplier::G , "" },
    { UnitMultiplier::T , "" },
    { UnitMultiplier::none , "none" }
};


ostream& operator<< (ostream& os, const UnitMultiplier &ee)
{
    os << unitMultiplierToString(ee);

    return os;
}

static bool isValidUnitMultiplierString(const char* str)
{
    if (String2UnitMultiplier.find(str) == String2UnitMultiplier.end()) {
        return false;
    }
    return true;
}

UnitMultiplier stringToUnitMultiplier(const char *str)
{
    if (isValidUnitMultiplierString(str)) {
        return String2UnitMultiplier.at(str);
    }
    return UnitMultiplier::INVALID;
}

std::string unitMultiplierToString(const UnitMultiplier &ee)
{
    std::string str = UnitMultiplier2String.at(ee);

    return str;
}

