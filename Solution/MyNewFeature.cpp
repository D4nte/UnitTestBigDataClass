#include "MyFeature.hpp"

const std::string MyFeatureAbstract::execute()
{
    std::string str = "Merry Christmas! ";
    str.append(getDataString());
    return str;
}

const std::string MyFeature::getDataString() const
{
    return _data.getString();
}

