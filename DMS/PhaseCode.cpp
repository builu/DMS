#include <iostream>
#include <map>
#include <string>

#include "PhaseCode.h"

using namespace std;

const map<string, PhaseCode> String2PhaseCode
{
    { "ABCN", PhaseCode::ABCN },
    { "ABC", PhaseCode::ABC },
    { "ABN", PhaseCode::ABN },
    { "ACN", PhaseCode::ACN },
    { "BCN", PhaseCode::BCN },
    { "AB", PhaseCode::AB },
    { "AC", PhaseCode::AC },
    { "BC", PhaseCode::BC },
    { "AN", PhaseCode::AN },
    { "BN", PhaseCode::BN },
    { "CN", PhaseCode::CN },
    { "A", PhaseCode::A },
    { "B", PhaseCode::B },
    { "C", PhaseCode::C },
    { "N", PhaseCode::N }
};

const map<PhaseCode, const string> PhaseCode2String
{
    { PhaseCode::ABCN , "ABCN" },
    { PhaseCode::ABC, "ABC" },
    { PhaseCode::ABN, "ABN" },
    { PhaseCode::ACN, "ACN" },
    { PhaseCode::BCN, "BCN" },
    { PhaseCode::AB, "AB" },
    { PhaseCode::AC, "AC" },
    { PhaseCode::BC, "BC" },
    { PhaseCode::AN, "AN" },
    { PhaseCode::BN, "BN" },
    { PhaseCode::CN, "CN" },
    { PhaseCode::A, "A" },
    { PhaseCode::B, "B" },
    { PhaseCode::C, "C" },
    { PhaseCode::N, "N" },
    { PhaseCode::INVALID, "INVALID" }
};

static bool isValidPhaseCodeString(const char* str)
{
    if (String2PhaseCode.find(str) == String2PhaseCode.end()) {
        return false;
    }
    return true;
}

std::string PhaseSrv::toString(const PhaseCode &ph)
{
    std::string str = PhaseCode2String.at(ph);

    return str;
}

PhaseCode PhaseSrv::toPhaseCode(const char *str)
{
    if (isValidPhaseCodeString(str)) {
        return String2PhaseCode.at(str);
    }
    return PhaseCode::INVALID;
}

ostream& operator<< (ostream& os, const PhaseCode &ph)
{
    os << PhaseSrv::toString(ph);

    return os;
}
