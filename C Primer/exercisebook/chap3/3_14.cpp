#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int main ()
{
    cout << "Input: " << endl;
    int num;
    vector<int> vint;
    while (cin >> num) {
        vint.push_back(num);
    }
    for (auto mem : vint) {
        cout << mem << " & ";
    }
    return 0;
}