#include <iostream>
#include <string>
#include <vector>
#include <memory>
using namespace std;

int main()
{
    char c;
    char *p = new char[5];
    auto *t = p;
    while (cin.get(c))
    {
        *p++ = c;
    }
    cout << t << endl;
}