#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int sum(initializer_list<int> inNum)
{
    int res = 0;
    for (auto i = inNum.begin(); i != inNum.end(); ++i)
    {
        res += *i;
    }
    return res;
}

int main()
{
    cout << sum({0, 1, 2}) << endl;
    cout << sum({0, 4, 2, 1, 3}) << endl;
}