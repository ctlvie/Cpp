#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
using namespace std;

template <typename T1, typename T2>
auto sum(T1 a, T2 b) -> decltype(a+b)
{
    return a + b;
}

int main()
{
    cout << sum(3455645, 42352456) << endl;
}