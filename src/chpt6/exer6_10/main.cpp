#include <iostream>

void swap(int* a, int* b)
{
    auto tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(int argc, char** argv)
{
    int a = 1;
    int b = 2;
    std::cout << "before swap: "
        << "a=" << a << " "
        << "b=" << b << " "
        << std::endl;
    swap(&a, &b);
    std::cout << "after swap: "
        << "a=" << a << " "
        << "b=" << b << " "
        << std::endl;
    return 0;
}