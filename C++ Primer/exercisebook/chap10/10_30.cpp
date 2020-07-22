#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
    istream_iterator<int> in(cin);
    istream_iterator<int> eof;
    ostream_iterator<int> out(cout, " ");
    vector<int> vint;
    while (in != eof)
        vint.push_back(*in++);
    sort(vint.begin(), vint.end());
    copy(vint.begin(), vint.end(), out);
}