#include <iostream>
#include <string>
#include <vector>
#include <list>
using namespace std;

int main()
{
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    vector<int> v;
    list<int> l;
    for (auto i : ia)
    {
        v.push_back(i);
        l.push_back(i);
    }
    for (auto i = v.begin(); i != v.end(); ++i)
    {
        if(!(*i % 2))
            v.erase(i);
    }
    for (auto i = l.begin(); i != l.end(); ++i)
    {
        if((*i % 2))
            l.erase(i);
    }
    cout << endl << "Vector:";
    for (auto i : v)
        cout << i << " ";
    cout << endl << "List:";
    for (auto i : l)
        cout << i << " ";
}