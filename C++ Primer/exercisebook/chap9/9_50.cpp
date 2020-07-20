#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int main()
{
    vector<string> vstr{"13", "233", "5", "234", "765"};
    int sum = 0;
    for (auto i : vstr)
    {
        sum += stoi(i);
    }
    cout << "sum: " << sum << endl;
}