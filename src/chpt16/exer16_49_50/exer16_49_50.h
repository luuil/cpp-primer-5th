#ifndef CPPP5_CHPT16_EXER16_49_50_
#define CPPP5_CHPT16_EXER16_49_50_

#include <iostream>
#include <string>

template <typename T>
void f(T t)
{
    std::cout << "f(T t): " << t << std::endl;
}

template <typename T>
void f(const T* p)
{
    std::cout << "f(const T* p): " << p << " " << *p << std::endl;
}

template <typename T>
void g(T t)
{
    std::cout << "g(T t): " << t << std::endl;
}

template <typename T>
void g(T* p)
{
    std::cout << "g(T* p): " << p << " " << *p << std::endl;
}

#endif // CPPP5_CHPT16_EXER16_49_50_
