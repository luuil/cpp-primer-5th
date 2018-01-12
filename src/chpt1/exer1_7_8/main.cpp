#include <iostream>

int main()
{
    std::cout << "/*";
    std::cout << "*/";

    // std::cout << /* "*/" */;
    std::cout << "*/";

    // correct
    std::cout << /* "*/" /* "/*" */;
    return 0;
}