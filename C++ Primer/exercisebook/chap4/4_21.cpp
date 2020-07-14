#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int main ()
{
    cout << "Input:" << endl;
    vector<int> vint;
    int inNum;
    while (cin >> inNum)
    {
        vint.push_back(inNum);
    }
    for (auto i : vint)
        cout << i << " ";
    cout << endl;
    for (auto &i : vint)
    {
        i = (i % 2 == 1) ? (2 * i) : i;
    }
    for (auto i : vint)
        cout << i << " ";
    cout << endl;
    return 0;
}