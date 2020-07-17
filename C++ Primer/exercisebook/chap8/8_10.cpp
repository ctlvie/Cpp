#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int main()
{
    fstream f("data.txt");
    string tempStr;
    vector<string> vstr;
    while (getline(f, tempStr))
        vstr.push_back(tempStr);

    string outStr;
    for (auto line : vstr)
    {
        stringstream ssi(line);
        while (ssi >> outStr)
            cout << outStr << "&";
        cout << endl;
    }
}