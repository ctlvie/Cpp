#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
using namespace std;
#include "Quote.h"
#ifndef LIMITED_QUOTE_H
#define LIMITED_QUOTE_H
#endif

class Limited_quote : public Quote
{
public:
    Limited_quote(const std::string &book, double sales_price, size_t m, double disc) : Quote(book, sales_price), max_qty(m), discount(disc) {}
    double net_price ( size_t cnt) const override
    {
        if (cnt <= max_qty)
            return cnt * (1 - discount) * price;
        else
            return max_qty * (1 - discount) * price + (cnt - max_qty) * price;
    }
private:
    size_t max_qty;
    double discount;
};