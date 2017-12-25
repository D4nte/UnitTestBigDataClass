#include <string>
#include "MyDataClass.hpp"

class MyFeature
{
    public:
        MyFeature()
        {}

        const std::string execute(const MyDataClass&  iData) // function body best in the cpp file
        {
            std::string str = "Merry Christmas! ";
            str.append(iData.getString());
            return str;
        }
};
