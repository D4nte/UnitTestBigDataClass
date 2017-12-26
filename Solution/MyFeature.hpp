#include <string>
#include "MyDataClass.hpp"

#ifndef MYFEATUREHPP
#define MYFEATUREHPP

class MyFeatureAbstract
{
    public:
        const std::string execute();

    protected:
            virtual const std::string getDataString() const = 0;
};

class MyFeature: public MyFeatureAbstract
{
    public:
        MyFeature(const MyDataClass& iData):
            _data(iData) {};

    protected:
        const std::string getDataString() const;

        const MyDataClass& _data;
};

#endif
