#include "print.h"
#include <iostream>
#include <string>

int main(int argc, char** argv)
{
    int i = 0;
    double d = 3.14;
    std::string s = "how now brown cow";
    print(std::cout, i, s, 42, d);
    print(std::cout, s, 42, "hi");
    print(std::cout, d, s);
    print(std::cout, "hi");
    return 0;
}