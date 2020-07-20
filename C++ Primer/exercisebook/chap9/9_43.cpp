#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

void func(string &s, const string oldVal, const string newVal)
{
    auto len = s.size();
    if (!len)
        return;
    auto iter = s.begin();
    string::size_type pos = 0;
    pos = s.find(oldVal);
    while (pos != -1)
    {
        s.replace(pos, oldVal.size(), newVal);
        pos = s.find(oldVal, pos + 1);
    }
    return;
}

int main()
{
    string a = "asdfjinv tho tho tho tho dsafjkdsf";
    cout << a << endl;
    func(a, "tho", "though");
    cout << a << endl;
}