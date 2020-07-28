#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <fstream>
using namespace std;

class LenCount
{
    public:
        LenCount(int l) : len(l) {}
        bool operator()(const string &str) const {
            return str.length() == len;
        }

    private:
        int len;
};

int main()
{
    ifstream fin("data.txt");
    vector<string> svec;
    string temp;
    map<int, size_t> m;
    while (fin >> temp)
        svec.push_back(temp);
    for (int i = 1; i <= 10; ++i)
    {
        LenCount l(i);
        for (auto str : svec)
        {
            if(l(str))
                ++m[i];
        }
    }
    for (auto beg = m.cbegin(); beg != m.cend(); ++beg)
        cout << beg->first << " : " << beg->second << endl;
}