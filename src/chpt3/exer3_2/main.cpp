#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

void read_line()
{
    string line;
    while(getline(cin, line))
    {
        cout << line << endl;
    }
}

void read_word()
{
    string word;
    while(cin >> word)
    {
        cout << word << endl;
    }
}

int main(int argc, char** argv)
{
    read_word();
    read_line();
    return 0;
}