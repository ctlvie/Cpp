#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include "Sales_data.h"
using namespace std;

int main()
{
    cout << "Input data for book4" << endl;
    Sales_data data1;
    Sales_data data2("456892348");
    Sales_data data3("345754788", 23, 456, 434);
    Sales_data data4(cin);

    cout << "Book1: ";
    print(cout, data1);
    cout << endl << "Book2: ";
    print(cout, data2);
    cout << endl << "Book3: ";
    print(cout, data3);
    cout << endl << "Book4: ";
    print(cout, data4);
    cout << endl;

}