#include "MyFeature.hpp"

const std::string MyFeatureAbstract::execute()
{
    std::string str = "Merry Christmas! ";
    const int aInt = getDataInt();
    if (aInt)
    {
        str = "Creepy Halloween! ";
    }
    str.append(getDataString());
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
