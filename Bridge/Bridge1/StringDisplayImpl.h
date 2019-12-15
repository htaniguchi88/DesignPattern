#include <string>
#include <iostream>
#include "DisplayImpl.h"

class StringDisplayImpl : public DisplayImpl
{
public:
    void RawOpen()
    {
        PrintLine();
    }

    void RawPrint(const std::string &str)
    {
        std::cout << str << std::endl;
    }

    void RawClose()
    {
        PrintLine();
    }

private:
    void PrintLine()
    {
        std::cout << "========"<< std::endl;
    }
};