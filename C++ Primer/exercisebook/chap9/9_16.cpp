#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <list>
using namespace std;

bool func(vector<int> &v, list<int> &l)
{
    if (v.size() != l.size())
        return false;
    else
    {
        auto iv = v.begin();
        auto il = l.begin();
        for (; (iv != v.end() && il != l.end()); ++iv, ++il)
        {
            if(*iv != *il)
                return false;
        }
        return true;
    }
}

int main()
{
    vector<int> v1{1, 2, 3, 4, 5};
    list<int> l1{1, 2, 3, 5, 4};
    list<int> l2{1, 2, 3, 4, 5};
    cout << func(v1, l1) << endl;
    cout << func(v1, l2) << endl;
}