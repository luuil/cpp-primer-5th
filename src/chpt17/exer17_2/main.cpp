#include <iostream>
#include <tuple>
#include <string>
#include <vector>

int main(int argc, char** argv)
{
    std::tuple<std::string,
        std::vector<std::string>,
        std::pair<std::string, int>> item("hello", { "world" }, { "!", 42 });

    std::cout << std::get<0>(item)
        << " " << std::get<1>(item)[0]
        << " " << std::get<2>(item).first
        << " " << std::get<2>(item).second
        << std::endl;

    return 0;
}