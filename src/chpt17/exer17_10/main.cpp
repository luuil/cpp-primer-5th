#include <iostream>
#include <vector>
#include <bitset>

int main(int argc, char** argv)
{
    std::vector<int> seq{1,2,3,5,8,13,21};
    const size_t SZ = 32;
    std::bitset<SZ> bvec;
    for(auto v : seq)
    {
        bvec.set(v);
    }

    std::bitset<SZ> bvec2;
    for(size_t i = 0; i < SZ; ++i)
    {
        // bvec2[i] = bvec[i]; // equalent
        bvec2.set(i, bvec.test(i));
    }


    std::cout << "bvec: " << bvec << std::endl;
    std::cout << "bvec2: " << bvec2 << std::endl;

    return 0;
}