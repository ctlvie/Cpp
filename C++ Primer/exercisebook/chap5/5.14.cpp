#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int main ()
{
    vector<string> vstr;
    cout << "Input: " << endl;
    string inStr;
    while (cin >> inStr)
        vstr.push_back(inStr);
    string currStr, lastStr;
    int count = 1, maxCount = 1;
    for (auto p = vstr.begin(); p != vstr.end(); ++p)
    {
        if (p == vstr.begin()) {
            lastStr = *p;
            continue;
        } 
        else {
            currStr = *p;
            if (currStr == lastStr) {
                ++count;
                maxCount = (count >= maxCount) ? count : maxCount;
            }
            lastStr = *p;
        }
    }
    if (count == 1)
        cout << "Not found." << endl;
    else
        cout << "Max: " << maxCount << endl;
    return 0;
}