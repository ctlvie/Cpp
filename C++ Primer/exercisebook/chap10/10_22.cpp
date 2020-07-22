#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
    vector<string> vstr{"Asdfwerf", "sdfg", "FGsdfger", "ads", "ASdf"};
    cout << count_if(vstr.begin(), vstr.end(), [](string &s) { return s.size() > 6; }) << endl;
}