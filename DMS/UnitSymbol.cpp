#include <iostream>
#include <map>
#include <string>

#include "UnitSymbol.h"

using namespace std;

const map<string, UnitSymbol> String2UnitSymbol
{
    { "none", UnitSymbol::none },
    { "VA", UnitSymbol::VA },
    { "W", UnitSymbol::W },
    { "VAr", UnitSymbol::VAr },
    { "VAh", UnitSymbol::VAh },
    { "Wh", UnitSymbol::Wh },
    { "VArh", UnitSymbol::VArh },
    { "V", UnitSymbol::V },
    { "ohm", UnitSymbol::ohm },
    { "A", UnitSymbol::A },
    { "F", UnitSymbol::F},
    { "H", UnitSymbol::H },
    { "deg", UnitSymbol::deg },
    { "rad", UnitSymbol::rad },
    { "S", UnitSymbol::S },
    { "Hz", UnitSymbol::Hz }
};

const map<UnitSymbol, const string> UnitSymbol2String
{
    { UnitSymbol::INVALID , "INVALID" },
    { UnitSymbol::none , "none" },
    { UnitSymbol::VA , "VA" },
    { UnitSymbol::W , "W" },
    { UnitSymbol::VAr , "VAr" },
    { UnitSymbol::VAh , "VAh" },
    { UnitSymbol::Wh , "Wh" },
    { UnitSymbol::VArh , "VArh" },
    { UnitSymbol::V , "V" },
    { UnitSymbol::ohm , "ohm" },
    { UnitSymbol::A , "A" },
    { UnitSymbol::F , "F" },
    { UnitSymbol::H , "H" },
    { UnitSymbol::deg , "deg" },
    { UnitSymbol::rad , "rad" },
    { UnitSymbol::S , "S" },
    { UnitSymbol::Hz , "Hz" }
};


ostream& operator<< (ostream& os, const UnitSymbol &ee)
{
    os << unitSymbolToString(ee);

    return os;
}

static bool isValidUnitSymbolString(const char* str)
{
    if (String2UnitSymbol.find(str) == String2UnitSymbol.end()) {
        return false;
    }
    return true;
}

UnitSymbol stringToUnitSymbol(const char *str)
{
    if (isValidUnitSymbolString(str)) {
        return String2UnitSymbol.at(str);
    }
    return UnitSymbol::INVALID;
}

std::string unitSymbolToString(const UnitSymbol &ee)
{
    std::string str = UnitSymbol2String.at(ee);

    return str;
}

