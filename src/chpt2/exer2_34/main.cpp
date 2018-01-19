#include <iostream>

int main()
{
    int i = 0, &r = i;
	auto a = r;
	const int ci = i, &cr = ci;
	auto b = ci;
	auto c = cr;
	auto d = &i;
	auto e = &ci;
	auto &g = ci;

	a = 42;
	std::cout << a << " " << i << std::endl; // 42 0
	b = 42;
	std::cout << b << " " << ci << std::endl; // 42 0
	c = 42;
	std::cout << c << " " << ci << std::endl; // 42 0

	// d = 42; // can not convert int to int*
	// e = 42; // can not convert int to const int*
	// g = 42; // can not assign to  const int&

    return 0;
}