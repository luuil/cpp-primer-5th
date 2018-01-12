#include <iostream>
#include <utility>

using std::cout;
using std::endl;

template <typename F, typename T1, typename T2>
void flip1(F f, T1 t1, T2 t2)
{
    f(t2, t1);
}

template <typename F, typename T1, typename T2>
void flip2(F f, T1&& t1, T2&& t2)
{
    f(t2, t1);
}

template <typename F, typename T1, typename T2>
void flip(F f, T1&& t1, T2&& t2)
{
    f(std::forward<T2>(t2), std::forward<T1>(t1));
}

void f(int v1, int& v2)
{
    cout << v1 << " " << ++v2 << endl;
}

void g(int&& v1, int& v2)
{
    cout << v1 << " " << v2 << endl;
}

int main(int argc, char** argv)
{
    int i, j;
    i = j = 0;
    flip1(f, i, 42);
    flip2(f, j, 42);
    cout << "flip1 f: i=" << i << endl
        << "flip2 f: j=" << j << endl;
    flip(f, i, 42);
    flip(g, j, 42);
    cout << "flip f: i=" << i << endl
        << "flip g: j=" << j << endl;
    // flip1(g, i, 42); // compile error
    // flip2(g, i, 42); // compile error
    return 0;
}