#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int main()
{
    vector<char> c{'a', 'b', 'c', 'd', 'e', '\0'};
    string a(c.data(), 3);
    cout << a << endl;
}