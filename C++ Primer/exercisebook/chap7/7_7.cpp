#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include "Sales_data.h"
using namespace std;

int main()
{
    cout << "Input: (ISBN, number, sellingPrice, salePrice)" << endl;
    Sales_data total;
    if (read(cin, total))
    {
        Sales_data trans;
        while (read(cin, trans))
        {
            if (total.isbn() == trans.isbn())
            {
                total = add(total, trans);
            }
            else
            {
                print(cout, total);
                cout << endl;
                total = trans;
            }
        }
        print(cout, total);
        cout << endl;
    }
    else
    {
        cout << "No Data!" << endl;
        return -1;
    }
    return 0;
}