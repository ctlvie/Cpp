#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include "Bulk_quote.h"
using namespace std;

double print_total(ostream &os, const Quote &item, size_t n)
{
    double ret = item.net_price(n);
    os << "ISBN: " << item.isbn() << " # sold: " << n << " total due: "
       << ret << endl;
    return ret;
}

int main()
{
    Quote q("24075023", 10);
    Bulk_quote bq("3435734984", 10, 5, 0.3);
    print_total(cout, q, 10);
    print_total(cout, bq, 10);
}