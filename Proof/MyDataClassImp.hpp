#include "MyDataClass.hpp"

#ifndef MYDATACLASSIMP_HPP
#define MYDATACLASSIMP_HPP

class  MyDataClassImp: public MyDataClass
{
    public:
        const std::string getString() const;

        const int getInt() const;
};
