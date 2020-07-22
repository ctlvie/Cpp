#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <utility>
using namespace std;

int main()
{
    vector<string> v1;
    vector<int> v2;
    vector<pair<string, int>> vec;
    cout << "Input String: " << endl;
    for (int i = 1; i <= 5; ++i)
    {
        string temp;
        cin >> temp;
        v1.push_back(temp);
    }
    cout << endl << "Input Integers: " << endl;
    for (int i = 1; i <= 5; ++i)
    {
        int temp;
        cin >> temp;
        v2.push_back(temp);
    }
    auto it1 = v1.begin();
    auto it2 = v2.begin();
    auto iter = vec.begin();
    for (int i = 1; i <= 5; ++i)
    {
        vec.push_back({*it1++, *it2++});
    }
    for (auto i : vec)
        cout << i.first << " " << i.second << endl;
}