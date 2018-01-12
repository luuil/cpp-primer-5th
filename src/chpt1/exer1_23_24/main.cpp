#include <iostream>
#include "include/Sales_item.h"

int main()
{
    Sales_item curbook, book;
    if (std::cin >> curbook)
    {
        int cnt = 1;
        while(std::cin >> book)
        {
            if (curbook.isbn() == book.isbn())
            {
                ++cnt;
            }
            else
            {
                std::cout << curbook << " occurs " 
                         << cnt << " times" << std::endl;
                curbook = book;
                cnt = 1;
            }
        }
        std::cout << curbook << " occurs " 
                  << cnt << " times" << std::endl;
    }
    return 0;
}