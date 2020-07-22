#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
    cout << "Input: " << endl;
    int temp;
    vector<int> vint;
    while(cin >> temp)
        vint.push_back(temp);
    int sum = accumulate(vint.begin(), vint.end(), 0);
    cout << sum << endl;
}