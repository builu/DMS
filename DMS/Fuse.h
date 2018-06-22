#pragma once

#include "Switch.h"

class CurrentFlow;

class Fuse : public Switch
{
private:

    std::shared_ptr<CurrentFlow> m_ampRating;

public:

    Fuse(const char *mRID, const char *name, PhaseCode phases, std::shared_ptr<BaseVoltage> baseVoltage, bool normalOpen, std::shared_ptr<CurrentFlow> ampRating = nullptr);

    void setAmpRating(std::shared_ptr<CurrentFlow> ampRating);
};

