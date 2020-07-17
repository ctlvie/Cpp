#ifndef PERSON_H
#define PERSON_H
#endif

#include <iostream>
#include <string>
using namespace std;

class Person 
{
public:
    Person() = default;
    Person(string const strN, string const strA) : strName(strN), strAddress(strA){};
    Person(istream &is) {is >> this->strName >> this->strAddress};
    friend std::istream &read(std::istream &is, Person &item);
    string getName() const { return strName; }
    string getAddress() const { return strAddress; }

private:
    string strName;
    string strAddress;
};

std::istream &read(std::istream &is, Person &item)
{
    is >> item.strName >> item.strAddress;
    return is;
}

std::ostream &print(std::ostream &os, const Person &item)
{
    os << item.getName() << " " << item.getAddress();
    return os;
}