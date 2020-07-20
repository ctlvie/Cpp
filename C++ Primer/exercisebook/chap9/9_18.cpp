#include <iostream>
#include <string>
#include <deque>
#include <cctype>
using namespace std;

int main()
{
    deque<string> dstr;
    string temp;
    while (cin >> temp)
    {
        dstr.push_back(temp);
    }
    cout << "Print: " << endl;
    for (auto i : dstr)
        cout << i << endl;
}