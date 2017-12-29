#include <string>
#include "StinkyOldLegacyDataClass.hpp"

class MyNewFeature
{
    public:
        MyNewFeature()
        {}

        std::string greet(const StinkyOldLegacyDataClass& iData);
};
