#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
    vector<int> vint = {0, 1, 2, 3, 32, 3, 4, 8, 3, 23, 2, 3, 23, 23};
    sort(vint.begin(), vint.end());
    list<int> lint;
    unique_copy(vint.begin(), vint.end(), back_inserter(lint));
    for (auto i : lint)
        cout << i << " ";
}