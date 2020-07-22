#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
    vector<int> v1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << endl;
    vector<int>::iterator it;
    for (it = v1.end() - 1; it != v1.begin() - 1; --it)
        cout << *it << " ";
}