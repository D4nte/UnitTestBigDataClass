#include <string>
#include "StinkyOldLegacyDataClass.hpp"

#ifndef MYFEATUREHPP
#define MYFEATUREHPP

class MyNewFeatureAbstract
{
    public:
        const std::string greet();

    protected:
            virtual const std::string getDataString() const = 0;
};

class MyNewFeature: public MyNewFeatureAbstract
{
    public:
        MyNewFeature(const StinkyOldLegacyDataClass& iData):
            _data(iData) {};

    protected:
        const std::string getDataString() const;

        const StinkyOldLegacyDataClass& _data;
};

#endif
