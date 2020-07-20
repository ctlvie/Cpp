#include <iostream>
#include <string>
#include <forward_list>
#include <cctype>
using namespace std;

int main()
{
    forward_list<int> l = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto front = l.before_begin();
    auto curr = l.begin();
    for (; curr != l.end();)
    {
        if (!(*curr % 2))
        {
            curr = l.erase_after(front);
        }
        else
        {
            curr = l.insert_after(curr, *curr);
            front = curr;
            ++curr;
        }
    }
    cout << "finish" << endl;
    for (auto i : l)
        cout << i << " ";
}