#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main ()
{
    cout << "Input Strings: " << endl;
    string valStr, resStr;
    while (cin >> valStr) {
        resStr = resStr + " " + valStr;
    }
    cout << "Output: " << resStr;
    return 0;
}