#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
using namespace std;

template <typename T>
void print(const T& a)
{
    for (typename T::size_type i = 0; i != a.size(); i++)
        cout << a.at(i) << " ";
    cout << endl;
}

int main()
{
    vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8};
    print(vec);
}