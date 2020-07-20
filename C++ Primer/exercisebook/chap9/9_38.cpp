#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int main()
{
    vector<int> vint;
    for (int i = 1; i <= 30; ++i)
    {
        vint.push_back(i);
        cout << i << " : " << "size: " << vint.size() << "  capacity" << vint.capacity() << endl;
    }
}