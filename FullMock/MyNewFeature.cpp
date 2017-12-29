#include "MyNewFeature.hpp"

const std::string MyNewFeature::execute(const StinkyOldLegacyDataClass&  iData)
{
    std::string str = "Merry Christmas! ";
    str.append(iData.getString());
    return str;
}
