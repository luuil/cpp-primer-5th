#include <iostream>

int main()
{
    int v1 = 0;
    int v2 = 0;
    std::cout << "Input number range please: ";
    std::cin >> v1 >> v2;
    int min = v1, max = v2;
    if (min > max)
    {
        min = v2;
        max = v1;
    }
    std::cout << "Numbers in range [" << min 
              << ", " << max << "]:"
              << std::endl;
    while(min <= max)
    {
        std::cout << min << std::endl;
        ++min;
    }
    return 0;
}