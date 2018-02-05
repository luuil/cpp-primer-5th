#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main(int argc, char **argv)
{
    int ia[] = {1, 2, 3};
    int *p1 = ia, *p2 = ia;
    p1 += p2 - p1;
    cout << "*p1=" << *p1 << " *p2=" << *p2 << endl;
    return 0;
}