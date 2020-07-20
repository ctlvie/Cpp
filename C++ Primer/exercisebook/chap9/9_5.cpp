#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

vector<int>::iterator f(vector<int>::iterator beg, vector<int>::iterator end, int num)
{
    for (auto i = beg; i != end; ++i)
    {
        if(*i == num)
            return i;
    }
    return end;
}

int main()
{
    vector<int> vint = {34, 3, 54, 565, 312, 45, 562, 54, 56};
    const vector<int>::iterator it = f(vint.begin(), vint.end(), 54);
    if(it == vint.end())
        cout << "Not Found." << endl;
    else
        cout << "Found: " << *it << endl;
}