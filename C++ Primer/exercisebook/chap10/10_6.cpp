#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
    vector<int> vint(10, 1);
    for (auto i : vint)
        cout << i << " ";
    cout << endl;
    fill_n(vint.begin(), vint.size(), 0);
    for (auto i : vint)
        cout << i << " ";
    cout << endl;
}