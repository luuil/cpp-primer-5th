#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

bool is_equal_array(int *a, int *b, const int size)
{
    int i = 0;
    while (i < size)
    {
        if (a[i] != b[i]) return false;
        i++;
    }
    return true;
}

bool is_equal_vector(const vector<int> &a, const vector<int> &b)
{
    if (a.size() != b.size()) return false;
    size_t i = 0;
    while (i < a.size())
    {
        if (a[i] != b[i]) return false;
        i++;
    }
    return true;
}

int main(int argc, char **argv)
{
    const int SIZE = 5;

    int ia[SIZE] = {1, 2, 3, 4, 5};
    int ib[SIZE] = {1, 2, 3, 4, 5};
    
    vector<int> va{1, 2, 3, 4, 5};
    vector<int> vb{1, 2, 3, 4, 5, 6};

    cout << is_equal_array(ia, ib, SIZE) << endl;
    cout << is_equal_vector(va, vb) << endl;
    return 0;
}