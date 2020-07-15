#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

void print(int a)
{
    cout << a << endl;
}

using arrayType = int[2];
void print(int (&arr)[2])
{
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    int i = 0;
    int j[2] = {0, 1};
    print(i);
    print(j);
}