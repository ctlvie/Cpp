#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

bool lenghCheck(const string &s)
{
    return s.size() >= 5;
}

int main()
{
    vector<string> vstr{"abcdsf", "ds", "trgsgrfgs", "fgsdfg", "sdf", "tr", "SDfawegtr"};
    cout << "Before: " << endl;
    for (auto i : vstr)
        cout << i << " ";
    cout << endl << "After: " << endl;
    auto iter = partition(vstr.begin(), vstr.end(), lenghCheck);
    vector<string>::iterator beg = vstr.begin();
    for (; beg != iter; ++beg)
        cout << *beg << " ";
}