#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
using namespace std;

class Employee {
private:
    static int sn;

public:
    Employee() { mysn = sn++; }
    Employee(const string &s) : name(s) { mysn = sn++; }
    Employee(Employee &){}
    Employee &operator=(const Employee&){}
    ~Employee();

private:
    string name;
    int mysn;
};

Employee::Employee(Employee &e)
{
    name = e.name;
    mysn = sn++;
}

Employee& Employee::operator=(const Employee&e)
{
    name = e.name;
    mysn = sn++;
    return *this;
}

Employee::~Employee()
{
    sn--;
}