#include "MyNewFeature.hpp"

const std::string MyNewFeature::execute(const StinkyOldLegacyDataClass&  iData)
{
    std::string str = "Merry Christmas! ";
    const int aInt = iData.getInt();
    if (aInt)
    {
        str = "Creepy Halloween! ";
    }
    str.append(iData.getString());
    return str;
}
