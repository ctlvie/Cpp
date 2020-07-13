#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int main ()
{
    cout << "Input: " << endl;
    string inStr;
    vector<string> vstr;
    while (cin >> inStr) {
        vstr.push_back(inStr);
    }
    for (auto mem : vstr) {
        cout << mem << " & ";
    }
    return 0;
}