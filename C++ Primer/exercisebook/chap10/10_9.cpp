#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

void elimDups(vector<string> &s)
{
    sort(s.begin(), s.end());
    auto it = unique(s.begin(), s.end());
    s.erase(it, s.end());
}

int main()
{
    vector<string> vstr{"asdf", "asdf", "sfg", "sgdfbs", "htrsdf", "hrtyzdfg"};
    cout << "Before: " << endl;
    for (auto i :  vstr)
        cout << i << " ";
    cout << endl
         << "After: " << endl;
    elimDups(vstr);
    for (auto i :  vstr)
        cout << i << " ";
}