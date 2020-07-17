#ifndef SALES_DATA_H
#define SALES_DATA_H
#endif

#include <string>
#include <iostream>

class Sales_data
{
private:
    std::string bookNo;
    unsigned units_sold = 0;
    double sellingprice = 0.0;
    double saleprice = 0.0;
    double discount = 0.0;
public:
    friend std::istream &read(std::istream &is, Sales_data &item);
    friend std::ostream &print(std::ostream &os, const Sales_data &item);
    Sales_data() = default;
    Sales_data(const std::string s) : bookNo(s){};
    Sales_data(const std::string s, unsigned un, double sep, double sap) : bookNo(s), units_sold(un), sellingprice(sep), saleprice(sap){};
    Sales_data(std::istream &);
    std::string isbn() const { return bookNo; }
    Sales_data& combine(const Sales_data & rhs)
    {
        units_sold += rhs.units_sold;
        saleprice = (rhs.saleprice * rhs.units_sold + saleprice * units_sold) / (rhs.units_sold + units_sold);
        if (sellingprice != 0)
            discount = saleprice / sellingprice;
        return *this;
    }
};

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

std::istream &read(std::istream &is, Sales_data &item)
{
    is >> item.bookNo >> item.units_sold >> item.sellingprice >> item.saleprice;
    return is;
}

std::ostream &print(std::ostream &os, const Sales_data &item)
{
    os << item.isbn() << " " << item.units_sold << " " << item.sellingprice << " " << item.saleprice << " " << item.discount;
    return os;
}