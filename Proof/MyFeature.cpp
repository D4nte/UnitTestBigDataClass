#include "MyFeature.hpp"

const std::string MyFeatureAbstract::execute()
{
    std::string str = "Merry Christmas! ";
    const int aInt = getDataInt();
    for(std::size_t i = 0; i < aInt+1; ++i)
    {
        str.append(iData.getString());
    }
    return str;
}

const std::string MyFeature::getDataString() const
{
    return _data.getString();
}

const int MyFeature::getDataInt() const
{
    return _data.getInt();
}
