#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <fstream>
using namespace std;

void func(const string inName, const string out1Name, const string out2Name)
{
    ifstream in(inName);
    ofstream out1(out1Name);
    ofstream out2(out2Name);
    vector<int> vint;
    istream_iterator<int> i_iter(in);
    istream_iterator<int> eof;
    ostream_iterator<int> o1_iter(out1, " ");
    ostream_iterator<int> o2_iter(out2, "\n");
    while (i_iter != eof)
        vint.push_back(*i_iter++);
    for (auto i : vint)
    {
        if (i % 2)
            *o1_iter++ = i;
        else
            *o2_iter++ = i;
    }
}

int main()
{
    func("data.txt", "out1.txt", "out2.txt");
}