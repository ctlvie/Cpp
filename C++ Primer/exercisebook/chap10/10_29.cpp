#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("data.txt");
    istream_iterator<string> it(in);
    istream_iterator<string> eof;
    vector<string> vstr;
    while (it != eof)
        vstr.push_back(*it++);
    for (auto i : vstr)
        cout << i << endl;
}