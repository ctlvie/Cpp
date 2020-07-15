#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;


int callCount()
{
    static int callCnt = 0;
    if (!callCnt)
    {
        callCnt = 1;
        return 0;
    }
    else
        return callCnt++;
}

int main()
{
    cout << callCount() << endl;
    cout << callCount() << endl;
    cout << callCount() << endl;
    cout << callCount() << endl;
}