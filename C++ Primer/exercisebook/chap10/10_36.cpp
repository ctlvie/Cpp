#include <iostream>
#include <string>
#include <list>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
    list<int> lint = {1, 2, 3, 0, 4, 5, 0, 1};
    auto res = find(lint.rbegin(), lint.rend(), 0);
    auto r = res.base();
    int count = 0;
    for (list<int>::iterator beg = lint.begin(); beg != r; ++beg)
        ++count;
    cout << count << endl;
}