#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

bool checkLength(const string &s)
{
    return s.size() > 6;
}

int main()
{
    vector<string> vstr{"Asdfwerf", "sdfg", "FGsdfger", "ads", "ASdf"};
    cout << count_if(vstr.begin(), vstr.end(), checkLength) << endl;
}