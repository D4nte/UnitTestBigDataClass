#include "MyDataClass.hpp"

#ifndef MYDATACLASSIMPHPP
#define MYDATACLASSIMPHPP

class  MyDataClassImp: public MyDataClass
{
    public:
        const std::string getString() const;

        const int getInt() const;
};
