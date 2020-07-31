#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <list>
using namespace std;

template <typename It, typename T>
It myFind(It beg, It end, const T &val)
{
    while (beg != end)
    {
        if (*beg == val)
            return beg;
        else
            ++beg;
    }
    return beg;
}

int main()
{
    vector<int> vec{0, 1, 2, 3, 4, 5, 6};
    vector<int>::iterator vit = myFind(vec.begin(), vec.end(), 4);
    cout << *vit << endl;
    list<string> lst{"a", "b", "c", "d"};
    list<string>::iterator lit = myFind(lst.begin(), lst.end(), "c");
    cout << *lit << endl;
}