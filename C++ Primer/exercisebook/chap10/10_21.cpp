#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

void func()
{
    int a = 3;
    int b = 8;
    cout << a << " " << b << endl;
    auto f = [&a]() -> bool {
        if (!a)
            return true;
        else
        {
            --a;
            return false;
        }
    };
    cout << f() << endl;
    cout << f() << endl;
    cout << f() << endl;
    cout << f() << endl;
    cout << f() << endl;
    cout << f() << endl;
    cout << a << " " << b << endl;
}

int main()
{
    func();
}