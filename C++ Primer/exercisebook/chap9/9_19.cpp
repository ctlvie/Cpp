#include <iostream>
#include <string>
#include <list>
#include <cctype>
using namespace std;

int main()
{
    list<string> dstr;
    string temp;
    while (cin >> temp)
    {
        dstr.push_back(temp);
    }
    cout << "Print: " << endl;
    for (auto i : dstr)
        cout << i << endl;
}