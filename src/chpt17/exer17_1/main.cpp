#include <iostream>
#include <tuple>

int main(int argc, char** argv)
{
    std::tuple<int, int, int> itup(10, 20, 30);
    std::tuple<int, int, int> itup2{ 10, 20, 30 };
    std::tuple<int, int, int> itup3 = { 10, 20, 30 };
    std::tuple<size_t, size_t, size_t> itup4 = { 10, 20, 30 }; // ???
    auto itup5 = std::make_tuple(10, 20, 30);
    size_t itup_n = std::tuple_size<decltype(itup)>::value;
    std::cout << itup_n
        << " " << (itup == itup2)
        << " " << (itup == itup3)
        << " " << (itup == itup4)
        << " " << (itup == itup5)
        << std::endl;

    return 0;
}