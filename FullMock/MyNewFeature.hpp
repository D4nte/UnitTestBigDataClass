#include <string>
#include "StinkyOldLegacyDataClass.hpp"

class MyNewFeature
{
    public:
        MyNewFeature()
        {}

        const std::string greet(const StinkyOldLegacyDataClass&  iData);
};
