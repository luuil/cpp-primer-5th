#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <iterator>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::begin;
using std::end;

int main(int argc, char **argv)
{
    // exercise 3.41
    int ia[] = {1, 2, 3};
    std::vector<int> v(begin(ia), end(ia));

    // exercise 3.42
    int *ib = new int[v.size()];
    size_t i = 0;
    while (i != v.size())
    {
        ib[i] = v[i];
		i++;
    }

	i = 0;
	while (i != v.size())
	{
		cout << ib[i++] << endl;
	}

    delete[] ib;

    return 0;
}