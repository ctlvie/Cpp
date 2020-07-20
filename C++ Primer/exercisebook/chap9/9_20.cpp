#include <iostream>
#include <string>
#include <deque>
#include <list>
#include <cctype>
using namespace std;

int main()
{
    cout << "Input:" << endl;
    list<int> l;
    int temp;
    while (cin >> temp)
        l.push_back(temp);
    cout << endl << endl;
    deque<int> dodd, deven;
    for (auto i : l)
    {
        if (i % 2)
            dodd.push_back(i);
        else
            deven.push_back(i);
    }
    cout << "Odd: ";
    for (auto i : dodd)
        cout << i << " ";
    cout << endl << "Even: ";
    for (auto i : deven)
    cout   << i << " ";
}