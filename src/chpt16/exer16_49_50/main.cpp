#include "exer16_49_50.h"

int main(int argc, char** argv)
{
    int i = 42, *p = &i;
    const int ci = 0, *p2 = &ci;
    g(42);
    g(p);
    g(ci);
    g(p2);
    f(42);

    /*
    viable:
    - void f(int*), with T bound to int*
    - void f(const int*), with T bound to int
    so the first one selected.
    */
    f(p);

    f(ci);
    f(p2);
    return 0;
}