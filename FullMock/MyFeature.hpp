#include <string>
#include "MyDataClass.hpp"

class MyFeature
{
    public:
        MyFeature()
        {}

        const std::string execute(const MyDataClass&  iData);
};
