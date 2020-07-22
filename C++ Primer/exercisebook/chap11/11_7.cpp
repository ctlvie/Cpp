#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
using namespace std;

void addFamily(map<string, vector<string>> &m, const string &sur)
{
    if (m.find(sur) != m.end())
    {
        m.insert({sur, {}});
    }
}

void addMember(map<string, vector<string>> &m, const string &sur, const string &giv)
{
    auto it = m.find(sur);
    it->second.push_back(giv);
}

int main()
{
    map<string, vector<string>> m = {{"James", {"1", "2", "3"}}};
    for (auto i : m)
        for (auto j : i.second)
            cout << i.first << " " << j << endl;
    addFamily(m, "Jone");
    for (auto i : m)
        for (auto j : i.second)
            cout << i.first << " " << j << endl;
    addMember(m, "Jone", "Brown");
    for (auto i : m)
        for (auto j : i.second)
            cout << i.first << " " << j << endl;
}