#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int main ()
{
    cout << "Input: " << endl;
    vector<int> vint;
    for (int i = 0; i <= 4; ++i)
    {
        int inNum;
        cin >> inNum;
        vint.push_back(inNum);
    }
    int aint[5];
    for (int i = 0; i <= 4; ++i)
    {
        aint[i] = vint[i];
    }
    for (auto i : aint)
        cout << i << " ";
    return 0;
}