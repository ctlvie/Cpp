#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <set>
using namespace std;

int main()
{
    string a = "asdfwe", b = "asdfawef";
    string::size_type t = a.size() + b.size();
    cout << t << endl;
    char *p = new char[t + 1];
}