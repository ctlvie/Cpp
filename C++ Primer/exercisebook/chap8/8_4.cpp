#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int main()
{
    ifstream f("data.txt");
    vector<string> vstr;
    string tempStr;
    while (getline(f, tempStr))
        vstr.push_back(tempStr);
    for (auto i : vstr)
        cout << i << endl;
}