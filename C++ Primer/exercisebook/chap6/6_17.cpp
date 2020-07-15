#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

bool func1(const string &str)
{
    for (auto i : str)
    {
        if (isupper(i))
            return true;
    }
    return false;
}

string func2(string &str)
{
    for (auto &i : str)
        i = tolower(i);
    return str;
}

int main()
{
    cout << "Input a string: " << endl;
    string inStr;
    cin >> inStr;
    cout << func1(inStr) << endl;
    cout << func2(inStr) << endl;
}