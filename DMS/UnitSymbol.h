#pragma once
#include <iostream>

enum class UnitSymbol
{
    INVALID,
	none,		// Dimension less quantity, e.g.count, per unit, etc.
	VA,			// Apparent power in volt ampere
	W,			// Active power in watt
	VAr,		// Reactive power in volt ampere reactive
	VAh,		// Apparent energy in volt ampere hours
	Wh,			// Real energy in what hours
	VArh,		// Reactive energy in volt ampere reactive hours
	V,			// Voltage in volt
	ohm,		// Resistance in ohm
	A,			// Current in ampere
	F,			// Capacitance in farad
	H,			// Inductance in henry
	deg,		// Plane angle in degrees
	rad,		// Plane angle in radians
	S,			// Conductance in siemens
	Hz,			// Frequency in hertz
};

std::ostream& operator<< (std::ostream& os, const UnitSymbol &ee);

UnitSymbol stringToUnitSymbol(const char *str);

std::string unitSymbolToString(const UnitSymbol &ee);


