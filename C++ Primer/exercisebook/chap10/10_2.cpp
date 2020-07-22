#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int main()
{
    cout << "Input integers: " << endl;
    vector<string> vint;
    string temp;
    while (cin >> temp)
        vint.push_back(temp);
    cout << "Input searching number:" << endl;
    string searchNum;
    cin >> searchNum;
    cout << count(vint.begin(), vint.end(), searchNum);
}