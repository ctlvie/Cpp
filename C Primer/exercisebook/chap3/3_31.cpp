#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int main ()
{
    int s[10];
    for (int i = 0; i <= 9; ++i)
        s[i] = i;
    for (auto i :s)
        cout << i << " ";
    return 0;
}