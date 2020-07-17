#include <iostream>
#include <string>
#include <vector>
#include <cctype>
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
    func(cin);
    return 0;
}