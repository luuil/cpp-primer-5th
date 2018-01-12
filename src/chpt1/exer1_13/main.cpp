#include <iostream>

int main()
{
    // rewrite exercise 1.9
    int sum = 0;
    for(int i = 50; i <= 100; ++i)
    {
        sum += i;
    }
    std::cout << "The sum from 50 to 100 is " << sum << std::endl;

    // rewrite exercise 1.10
    for(int i = 10; i >= 0; --i)
    {
        std::cout << i << std::endl;
    }

    // rewrite exercise 1.11
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
    for(; min <= max; ++min)
    {
        std::cout << min << std::endl;
    }

    return 0;
}