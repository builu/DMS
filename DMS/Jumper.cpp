#include "Jumper.h"


Jumper::Jumper(const char *mRID, const char *name, PhaseCode phases, std::shared_ptr<BaseVoltage> baseVoltage, bool normalOpen):
    Switch{ mRID, name, phases, baseVoltage, normalOpen }
{
}

