#pragma once
#include "IdentifiedObject.h"

class BaseVoltage;

class Equipment : public IdentifiedObject
{
    friend std::ostream& operator<< (std::ostream& os, const Equipment &de);

private:

    bool m_normalIlyInService{ true }; // The equipment is normally in service

    

public:

    Equipment(const char *mRID, const char *name, bool normalIlyInService = true);

    void setNormalIlyInService(bool normalIlyInService);

  
    virtual std::string toString() const;
};

