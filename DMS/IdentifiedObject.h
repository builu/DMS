#pragma once

#include <iostream>

class IdentifiedObject
{

	friend std::ostream& operator<< (std::ostream& os, const IdentifiedObject &id);

private:

	std::string m_mRID; // The unique id of the object.

	std::string m_name; // The name of the object.

	std::string m_description; // The description of the object.

public:

	IdentifiedObject(const char *mRID, const char *name = "", const char *description = "");

    void setDesciption(const char *description);

	std::string getMRID() { return m_mRID; }

	virtual std::string toString() const;

	virtual ~IdentifiedObject();
};
