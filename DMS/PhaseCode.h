#pragma once

const unsigned PHASE_CODE_A{ 0x00000001 };
const unsigned PHASE_CODE_B{ 0x00000010 };
const unsigned PHASE_CODE_C{ 0x00000100 };
const unsigned PHASE_CODE_N{ 0x00001000 };

enum class PhaseCode : unsigned
{
	ABCN = PHASE_CODE_A | PHASE_CODE_B | PHASE_CODE_C | PHASE_CODE_N,
	ABC = PHASE_CODE_A | PHASE_CODE_B | PHASE_CODE_C,
	ABN = PHASE_CODE_A | PHASE_CODE_B | PHASE_CODE_N,
	ACN = PHASE_CODE_A | PHASE_CODE_C | PHASE_CODE_N,
	BCN = PHASE_CODE_B | PHASE_CODE_C | PHASE_CODE_N,
	AB = PHASE_CODE_A | PHASE_CODE_B,
	AC = PHASE_CODE_A | PHASE_CODE_C,
	BC = PHASE_CODE_B | PHASE_CODE_C,
	AN = PHASE_CODE_A | PHASE_CODE_N,
	BN = PHASE_CODE_B | PHASE_CODE_N,
	CN = PHASE_CODE_C | PHASE_CODE_N,
	A = PHASE_CODE_A,
	B = PHASE_CODE_B,
	C = PHASE_CODE_C,
	N = PHASE_CODE_N,
	INVALID = 0 
};

class PhaseSrv
{
public:
    static std::string toString(const PhaseCode &ph);
    static PhaseCode toPhaseCode(const char *str);
};

std::ostream& operator<< (std::ostream& os, const PhaseCode &ph);

