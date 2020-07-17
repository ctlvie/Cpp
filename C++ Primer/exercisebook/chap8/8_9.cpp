#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <sstream>
using namespace std;

istream& func(istream& in)
{
    int inNum;
    while (in >> inNum, !in.eof())
    {
        cout << inNum;
    }
    in.clear();
    return in;
}

int main()
{
    istringstream in("sdfkenin");
    func(in);
}