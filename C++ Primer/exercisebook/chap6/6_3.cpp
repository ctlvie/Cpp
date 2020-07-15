#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int main ()
{
    cout << "Input: " << endl;
    int inNum;
    cin >> inNum;
    if (inNum < 0)
        return 1;
    int res = 1;
    for (int i = inNum; i >= 1; --i)
    {
        res *= i;
    }
    cout << "Result: " << res << endl;
}