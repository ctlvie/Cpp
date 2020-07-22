#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int main()
{
    cout << "Input integers: " << endl;
    vector<int> vint;
    int temp;
    while (cin >> temp)
        vint.push_back(temp);
    cout << "Input searching number:" << endl;
    int searchNum;
    cin >> searchNum;
    cout << count(vint.begin(), vint.end(), searchNum);
}