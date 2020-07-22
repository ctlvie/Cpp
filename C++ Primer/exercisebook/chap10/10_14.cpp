#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

void func()
{
    int a = 1;
    auto f = [a](int b) { return a + b; };
    cout << f(3) << endl;
}

int main()
{
    func();
}