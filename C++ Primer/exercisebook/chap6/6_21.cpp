#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int func (int a, int *b)
{
    if (a >= *b)
        return a;
    else
        return *b;
}

int main()
{
    cout << "Input: " << endl;
    int numA, numB;
    cin >> numA >> numB;
    cout << func(numA, &numB) << endl;
}