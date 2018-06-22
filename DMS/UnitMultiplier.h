#pragma once

#include <iostream>


enum class UnitMultiplier
{
    INVALID,
    p,          // Pico 10**–12
    n,          // Nano 10 * *–9
    micro,      // Micro 10 * *–6
    m,          // Milli 10 * *–3
    c,          // Centi 10 * *–2
    d,          // Deci 10 * *–1
    k,          // Kilo 10 * *3
    M,          // Mega 10 * *6
    G,          // Giga 10 * *9
    T,          // Tera 10 * *12
    none
};


std::ostream& operator<< (std::ostream& os, const UnitMultiplier &ee);

UnitMultiplier stringToUnitMultiplier(const char *str);

std::string unitMultiplierToString(const UnitMultiplier &ee);