#include "MyNewFeature.hpp"

std::string MyNewFeature::greet(const StinkyOldLegacyDataClass& iData)
{
    std::string str = "Merry Christmas! ";
    str.append(iData.getString());
    return str;
}
