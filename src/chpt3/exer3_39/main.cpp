#include <iostream>
#include <string>
#include <cstring>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::strcmp;
using std::string;

int string_cmp(const string &sa, const string &sb)
{
    if (sa == sb) return 0;
    if (sa > sb) return +1;
    return -1;
}

int str_cmp(const char *a, const char *b)
{
    return strcmp(a, b);
}

int main(int argc, char **argv)
{

    char ca[] = {'l', 'i', 'u', '\0'};
	char cb[] = { 'l', 'u', '\0' };
	char cc[] = {'l', 'u', '\0'};

    string sa("liu");
	string sb("lu");
	string sc("lu");

	cout << str_cmp(ca, cb) << endl;
	cout << str_cmp(cb, ca) << endl;
	cout << str_cmp(cc, cb) << endl;
	cout << string_cmp(sa, sb) << endl;
	cout << string_cmp(sb, sa) << endl;
	cout << string_cmp(sc, sb) << endl;
    return 0;
}