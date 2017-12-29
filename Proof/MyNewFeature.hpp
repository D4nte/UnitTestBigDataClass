#include <string>
#include "StinkyOldLegacyDataClass.hpp"

#ifndef MYFEATUREHPP
#define MYFEATUREHPP

class MyNewFeatureAbstract
{
    public:
        const std::string execute();

    protected:
            virtual const std::string getDataString() const = 0;
            virtual const int getDataInt() const = 0;
};

class MyNewFeature: public MyNewFeatureAbstract
{
    public:
        MyNewFeature(const StinkyOldLegacyDataClass& iData):
            _data(iData) {};


    protected:
        const std::string getDataString() const;
        
        const int getDataInt() const;

        const StinkyOldLegacyDataClass& _data;

};

#endif
