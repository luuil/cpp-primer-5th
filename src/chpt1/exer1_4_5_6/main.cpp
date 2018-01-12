#include <iostream>

int main()
{
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;

    // exercise 1.4
    std::cout << "(exer1.4) The product of " << v1 << " and " << v2
              << " is " << v1 * v2 << std::endl;

    // exercise 1.5
    std::cout << "(exer1.5) The product of ";
    std::cout << v1;
    std::cout << " and ";
    std::cout << v2;
    std::cout << " is ";
    std::cout << v1 * v2;
    std::cout << std::endl;

    // exercise 1.6
    // remove the semicolon
    std::cout << "(exer1.6) The product of " << v1 //;
              << " and " << v2 //;
              << " is " << v1 * v2 << std::endl;
    return 0;
}