#include "Fuse.h"


Fuse::Fuse(const char *mRID, const char *name, PhaseCode phases, std::shared_ptr<BaseVoltage> baseVoltage, bool normalOpen, std::shared_ptr<CurrentFlow> ampRating) :
    Switch{ mRID, name, phases, baseVoltage, normalOpen }, m_ampRating{ ampRating }
{
}

void Fuse::setAmpRating(std::shared_ptr<CurrentFlow> ampRating)
{
    m_ampRating = ampRating;
}