#include "MyNewFeature.hpp"

const std::string MyNewFeatureAbstract::greet()
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

const std::string MyNewFeature::getDataString() const
{
    return _data.getString();
}

const int MyNewFeature::getDataInt() const
{
    return _data.getInt();
}
