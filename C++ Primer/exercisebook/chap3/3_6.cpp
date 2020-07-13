#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main ()
{
    cout << "Input: " << endl;
    string inStr, inStr2;
    cin >> inStr;
    inStr2 = inStr;
    for (auto &c : inStr)
        c = 'X';
    cout << "Res: (for implementation) " << inStr << endl;
    int i = 0;
    while (inStr2[i] != '\0') {
        inStr2[i] = 'X';
        ++i;
    }
    cout << "Res: (while implementation) " << inStr2 << endl;
    return 0;
}