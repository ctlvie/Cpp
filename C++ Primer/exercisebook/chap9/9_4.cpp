#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

bool f(vector<int>::iterator beg, vector<int>::iterator end, int num)
{
    for (auto i = beg; i != end; ++i)
    {
        if(*i == num)
            return true;
    }
    return false;
}

int main()
{
    vector<int> vint = {34, 3, 54, 565, 312, 45, 562, 54, 56};
    cout << f(vint.begin(), vint.end(), 54);
}