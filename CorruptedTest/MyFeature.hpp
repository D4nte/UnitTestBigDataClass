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
            const int aInt = iData.getInt();
            for(std::size_t i = 0; i < aInt+1; ++i)
            {
                str.append(iData.getString());
            }
            return str;
        }
};
