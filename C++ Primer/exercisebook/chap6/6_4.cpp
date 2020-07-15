#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int fact(int inNum);


int main()
{
    cout << "Input: " << endl;
    int inNum;
    cin >> inNum;
    int result;
    result = fact(inNum);
    if (result == -1)
        cout << "Input error." << endl;
    else
        cout << "Result: " << result << endl;
}


int fact(int inNum)
{
    if (inNum < 0)
        return -1;
    int res = 1;
    for (int i = inNum; i >= 1; --i)
    {
        res *= i;
    }
    return res;
}