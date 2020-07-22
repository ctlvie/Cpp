#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <fstream>
using namespace std;

string strFormat(string &s)
{
    for (auto i = s.begin(); i != s.end(); ++i)
    {
        *i = tolower(*i);
        if (!isalpha(*i))
            s.erase(i);
    }
    return s;
}

int main()
{
    ifstream in("data.txt");
    map<string, int> m;
    string word;
    while (in >> word)
        ++m[strFormat(word)];
    for (auto i : m)
        cout << i.first << " : " << i.second << endl;
}