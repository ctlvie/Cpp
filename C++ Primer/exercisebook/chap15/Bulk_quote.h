#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include "Quote.h"
using namespace std;

#ifndef BULK_QUOTE_H
#define BULK_QUOTE_H
#endif

class Bulk_quote : public Quote
{
public:
    Bulk_quote(const std::string &book, double sales_price, size_t m, double disc) : Quote(book, sales_price), min_qty(m), discount(disc) {}
    double net_price ( size_t cnt) const override
    {
        if (cnt >= min_qty)
            return cnt * (1 - discount) * price;
        else
            return cnt * price;
    }
    void debug(ostream &os) override { Quote::debug(os);
        os << "Min_qty: " << min_qty << "Discount: " << discount;
    }

private:
    size_t min_qty;
    double discount;
};