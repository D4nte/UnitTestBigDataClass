#include "MyFeature.hpp"

const std::string MyFeature::execute(const MyDataClass&  iData)
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
