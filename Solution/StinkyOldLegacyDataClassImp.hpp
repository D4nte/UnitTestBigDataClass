#include "StinkyOldLegacyDataClass.hpp"

#ifndef MYDATACLASSIMPHPP
#define MYDATACLASSIMPHPP

class  StinkyOldLegacyDataClassImp: public StinkyOldLegacyDataClass
{
    public:
        const std::string getString() const;

        const int getInt() const;
};
