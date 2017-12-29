#include "MyNewFeature.hpp"

const std::string MyNewFeatureAbstract::execute()
{
    std::string str = "Merry Christmas! ";
    str.append(getDataString());
    return str;
}

const std::string MyNewFeature::getDataString() const
{
    return _data.getString();
}

