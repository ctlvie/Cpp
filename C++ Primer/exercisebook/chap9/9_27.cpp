#include <iostream>
#include <string>
#include <vector>
#include <forward_list>
using namespace std;

int main()
{
    int ia[] = {3, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    forward_list<int> l;
    for (auto i : ia)
        l.push_front(i);

    auto i = l.before_begin();
    auto i2 = l.begin();
    for (; i2 != l.end(); ++i, ++i2)
    {
        if ((*i2) % 2)
            l.erase_after(i);
    }
    for (auto i : l)
        cout << i << " ";
}