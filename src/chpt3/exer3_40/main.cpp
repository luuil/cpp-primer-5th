#include <iostream>
#include <string>
#include <cstring>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::strcat;
using std::strcpy;
using std::strlen;

int main(int argc, char **argv)
{

    char ca[] = "liu";
	char cb[] = "lu";

    const int cSIZE = strlen(ca) + strlen(cb) + 1;
    char *cc = new char[cSIZE];
	strcpy(cc, ca);
	strcat(cc, cb);

	cout << ca << endl;
	cout << cb << endl;
	cout << cc << endl;
	delete[] cc;

    return 0;
}