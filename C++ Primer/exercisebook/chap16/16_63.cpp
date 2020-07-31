#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
using namespace std;

template <typename T>
int func(const vector<T> vec, const T& val)
{
    int cnt = 0;
    for (auto it = vec.begin(); it != vec.end(); ++it)
    {
        if (*it == val)
            ++cnt;
    }
    return cnt;
}

int main()
{
    vector<double> vd {1.0, 1.0, 2.4, 34.4, 2.4};
    vector<string> vs {"adf", "ad", "dsfji", "adf"};
    cout << func(vd, 2.4) << endl;
    cout << func<string>(vs, "adf") << endl;
}