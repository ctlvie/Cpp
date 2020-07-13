#include <iostream>
#include "Sales_item.h"
using namespace std;

int main ()
{
    Sales_item item1;
    std::cout << "Please input item: ISBN, saleNum, totValue, avgPrice";
    while (std::cin >> item1) {
        std::cout << item1 << endl;
    }
    return 0;
}