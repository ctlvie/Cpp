#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
    vector<int> vint = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    list<int> lint;
    vector<int>::reverse_iterator l, r;
    l = vint.rbegin();
    l = l + 2;
    r = vint.rend();
    r = r - 3;
    copy(l, r, back_inserter(lint));
    for (auto i : lint)
        cout << i << " ";
}