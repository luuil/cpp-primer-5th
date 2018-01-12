#include "errmsg.h"
#include <string>

int main(int argc, char** argv)
{
    std::string s = "hi";
    int i = 1;
    double d = 2.0;
    errMsg(std::cout, s, "i=", i, "d=", d);
    return 0;
}