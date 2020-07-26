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
private:
    std::string *ps;
    int i;
};

HasPtr::HasPtr(const HasPtr &hp)
{
    ps = new std::string(*hp.ps);
    i = hp.i;
}