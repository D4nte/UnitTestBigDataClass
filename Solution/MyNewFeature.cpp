#include "MyNewFeature.hpp"

std::string MyNewFeatureAbstract::greet()
{
    std::string str = "Merry Christmas! ";
    str.append(getDataString());
    return str;
}

const std::string MyNewFeature::getDataString() const
{
    return _data.getString();
}

