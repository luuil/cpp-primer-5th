#include <iostream>

int main()
{
    int i = 0, *pi = &i;
    std::cout << i << std::endl; // 0
    *pi = 10; // change value it points
    std::cout << i << std::endl; // 10
    pi = 0; // change value of pointer

    return 0;
}