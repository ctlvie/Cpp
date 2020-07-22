#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>
using namespace std;
using std::placeholders::_1;

bool checkSize(const string &s, string::size_type val)
{
    return s.size() >= val;
}

void biggies(vector<int> &vint, const string &str)
{
    auto size = str.size();
    auto f = bind(checkSize, _1, size);
    auto p = find_if(vint.begin(), vint.end(), bind(checkSize, _1, size));
    cout << *p << endl;
}

int main()
{
    vector<int> vc = {1, 2, 3, 4, 5, 6, 7};
    biggies(vc, "df");
}