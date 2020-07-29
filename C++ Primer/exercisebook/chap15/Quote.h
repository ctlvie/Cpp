#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
using namespace std;

#ifndef QUOTE_H
#define QUOTE_H
#endif


class Quote
{
public:
    Quote() = default;
    Quote(const std::string &book, double sales_price) : bookNo(book), price(sales_price){}
    std::string isbn() const { return bookNo; }
    virtual double net_price(std::size_t n) const { return n * price; }
    virtual void debug(ostream &os) { os << "BookNo: " << bookNo << " Price: " << price; }
    virtual ~Quote() = default;
private:
    std::string bookNo;
protected:
    double price = 0.0;
};