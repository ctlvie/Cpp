#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int main ()
{
    int num[10];
    cout << "Input: " << endl;
    for (int i = 0; i <= 9; ++i)
    {
        cin >> num[i];
    }
    cout << "Initial: " << endl;
    for (auto i : num)
        cout << i << " ";
    int *p = num;
    for (int i = 0; i <= 9; ++i)
    {
        *(p + i) = 0;
    }
    cout << endl;
    cout << "After: " << endl;
    for (auto i : num)
        cout << i << " ";
    return 0;
}