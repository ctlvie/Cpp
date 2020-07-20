#include <iostream>
#include <string>
#include <forward_list>
#include <cctype>
using namespace std;

void func(forward_list<string> &l, const string strA, const string strB)
{
    auto front_i = l.before_begin();
    auto i = l.begin();
    for (; i != l.end(); ++i, ++front_i)
    {
        if (*i == strA)
        {
            l.insert_after(i, strB);
            return;
        }
    }
    l.insert_after(front_i, strB);
}

int main()
{
    forward_list<string> l{"a", "b", "c", "dsf", "f"};
    func(l, "df", "hello");
    for (auto i : l)
        cout << i << " ";
}