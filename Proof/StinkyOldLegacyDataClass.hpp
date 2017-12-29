#include <string>

#ifndef MYDATACLASSHPP
#define MYDATACLASSHPP

class MyDataClass
{
    public:
        virtual const std::string getString() const = 0;

        virtual const int getInt() const = 0;
};

#endif
