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

//-- exercise 3.43 --//
void print_array1(int (&a)[3][4])
{
    for (int (&row) [4] : a)
    {
        for(int col : row)
        {
            cout << col << endl;
        }
    }
}

void print_array2(const int (&a)[3][4])
{
	for (size_t i = 0; i != 3; ++i)
	{
		for (size_t j = 0; j != 4; ++j)
		{
			cout << a[i][j] << endl;
		}
	}
}

void print_array3(int (&a)[3][4])
{
	int (*row_beg)[4] = begin(a);
	for (; row_beg != end(a); ++row_beg)
	{
		for (int *col_beg = *row_beg; 
            col_beg != end(*row_beg);
            ++col_beg)
		{
			cout << *col_beg << endl;
		}
	}
}
//-- end exercise 3.43 --//

//-- exercise 3.44 --//
void print_array4(int (&a)[3][4])
{
	using int_arr4 = int[4];
	for (int_arr4 *p = a; p != a + 3; ++p)
	{
		for (int *q = *p; q != *p + 4; ++q)
			cout << *q << endl;
	}
}
//-- end exercise 3.44 --//

//-- exercise 3.45 --//
void print_array5(int (&a)[3][4])
{
	for (auto &row : a)
	{
		for (auto col : row)
			cout << col << endl;
	}
}
//-- end exercise 3.45 --//




int main(int argc, char **argv)
{
    // exercise 3.41
    int ia[3][4] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11},
    };
	print_array1(ia);
	print_array2(ia);
	print_array3(ia);
	
	//-- exercise 3.44 --//
	print_array4(ia);

	//-- exercise 3.45 --//
	print_array5(ia);

    return 0;
}