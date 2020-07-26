#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
using namespace std;

class HasPtr {
public:
    HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0){}
    HasPtr(HasPtr&) {}
    HasPtr &operator=(const HasPtr &);
    ~HasPtr();
private:
    std::string *ps;
    int i;
};

HasPtr::HasPtr(const HasPtr &hp)
{
    ps = new std::string(*hp.ps);
    i = hp.i;
}

HasPtr& HasPtr::operator=(const HasPtr &hp)
{
    auto newp = new std::string(*hp.ps);
    delete hp.ps;
    ps = newp;
    i = hp.i;
    return *this;
}

HasPtr::~HasPtr()
{
    delete ps;
}