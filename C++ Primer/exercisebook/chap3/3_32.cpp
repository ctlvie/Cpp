#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int main ()
{
    int s1[10];
    int s2[10];
    for (int i = 0; i <= 9; ++i)
        s1[i] = i;
    for (int i = 0; i <= 9; ++i)
        s2[i] = s1[i];

    vector<int> v1;
    for (int i = 0; i <= 9; i++)
    {
        v1.push_back(i);
    }
    vector<int> v2 = v1;
    for (auto i : v1)
        cout << i << " ";
    return 0;
}