#include <iostream>
#include <string>
#include "PhaseCode.h"
#include "UnitSymbol.h"

using namespace std;

static void testPhaseCode()
{
	PhaseCode ph = PhaseCode::ABCN;

	cout << ph << endl;

	ph = PhaseSrv::toPhaseCode("BC");

	cout << ph << endl;

	ph = PhaseSrv::toPhaseCode("BCXX");

	cout << ph << endl;

	cout << PhaseSrv::toString(PhaseCode::AB) << endl;
}

static void testUnitSymbol()
{
    UnitSymbol us = UnitSymbol::deg;

    cout << us << endl;

    us = stringToUnitSymbol("BC");

    cout << us << endl;

    us = stringToUnitSymbol("V"); 

    cout << us << endl;

    cout << unitSymbolToString(us) << endl;
}


void runTest()
{
	testPhaseCode();
    testUnitSymbol();
}