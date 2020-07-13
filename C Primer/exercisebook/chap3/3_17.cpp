#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int main ()
{
    cout << "Input: " << endl;
    string inStr;
    vector<string> vStr;
    while (cin >> inStr) {
        vStr.push_back(inStr);
    }
    for (auto &s : vStr) {
        for (auto &c : s) {
            c = toupper(c);
        }
        cout << s << endl;
    }
    return 0;
}