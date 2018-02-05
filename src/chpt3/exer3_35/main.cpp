#include <iostream>
#include <string>
#include <iterator>

using std::begin;
using std::end;
using std::cout;
using std::cin;
using std::endl;

int main(int argc, char **argv)
{
    const int SIZE = 5;
    int ia[SIZE] = {1, 2, 3, 4, 5};
    int *pbeg = begin(ia), *pend = end(ia);
    while (pbeg != pend)
    {
        cout << "*pbeg=" << *pbeg << endl;
        *pbeg = 0;
        pbeg++;
    }

    pbeg = begin(ia);
    while (pbeg != pend)
    {
        cout << "*pbeg=" << *pbeg << endl;
        pbeg++;
    }
    return 0;
}