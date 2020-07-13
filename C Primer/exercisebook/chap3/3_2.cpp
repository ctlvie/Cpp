#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main ()
{
    string str1, str2, str;
    str2 = "";
    getline(cin, str1);
    while (cin >> str)
        str2 += str;
    cout << str1 << " " << str2 << endl;
    return 0;
}