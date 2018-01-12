#include "debug_rep.h"
#include <iostream>
#include <string>

int main(int argc, char** argv)
{
    std::string s("hi");
    std::string *p = &s;

    // debug_rep(const std::string &s)
    std::cout << debug_rep(s) << std::endl;

    // debug_rep(T *p) -> debug_rep(const std::string &s)
    std::cout << debug_rep(p) << std::endl; 

    // debug_rep(const char *p) -> debug_rep(const std::string &s)
    std::cout << debug_rep("hi2") << std::endl;
    return 0;
}