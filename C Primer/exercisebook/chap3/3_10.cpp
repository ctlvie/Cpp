#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int main ()
{
    cout << "Input: " << endl;
    string inStr;
    getline(cin, inStr);
    for (auto c : inStr) {
        if (!ispunct(c))
            cout << c;
    }
    return 0;
}