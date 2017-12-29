#include "MyFeature.hpp"

const std::string MyFeature::execute(const MyDataClass&  iData)
{
    std::string str = "Merry Christmas! ";
    str.append(iData.getString());
    return str;
}
