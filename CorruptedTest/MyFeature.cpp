#include "MyFeature.hpp"

const std::string MyFeature::execute(const MyDataClass&  iData)
{
    std::string str = "Merry Christmas! ";
    const int aInt = iData.getInt();
    for(std::size_t i = 0; i < aInt+1; ++i)
    {
        str.append(iData.getString());
    }
    return str;
}
