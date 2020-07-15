#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

void exchange(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

int main()
{
    int a = 1, b = 2;
    cout << a << " " << b << endl;
    exchange(&a, &b);
    cout << a << " " << b << endl;
}