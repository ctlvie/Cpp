#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
using namespace std;

template <typename T>
void print(const T& a)
{
    for (auto beg = a.begin(); beg != a.end(); ++beg)
        cout << *beg << " ";
    cout << endl;
}

int main()
{
    vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8};
    print(vec);
}