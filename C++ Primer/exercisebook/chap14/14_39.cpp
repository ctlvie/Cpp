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
        bool operator()(const string &str) const {
            return str.length() <= 9;
        }
};

int main()
{
    ifstream fin("data.txt");
    vector<string> svec;
    string temp;
    map<int, size_t> m;
    while (fin >> temp)
        svec.push_back(temp);
    int lessThan = 0, moreThan = 0;
    LenCount l;
    for (auto str : svec)
    {
        if(l(str))
            ++lessThan;
        else
            ++moreThan;
    }
    cout << "Less: " << lessThan << endl;
    cout << "More: " << moreThan << endl;
}