#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
using namespace std;

template <typename T>
ostream &print(ostream &os, const T &t)
{
    return os << t;
}
template <typename T, typename...Args>
ostream &print(ostream &os, const T &t, const Args&... rest)
{
    os << t << " ";
    return print(os, rest...);
}

int main()
{
    int i = 1;
    string s = "sdaf";
    print(cout, i, s, "sdfgd", 34.43);
}