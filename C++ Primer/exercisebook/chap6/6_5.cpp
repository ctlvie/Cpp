#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int abs(int inNum)
{
    int res;
    res = (inNum <= 0) ? (-inNum) : inNum;
    return res;
}

int main()
{
    cout << "Please Input a number: " << endl;
    int inNum;
    cin >> inNum;
    cout << "Result: " << abs(inNum) << endl;
}