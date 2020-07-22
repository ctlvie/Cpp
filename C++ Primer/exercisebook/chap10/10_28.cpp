#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <list>
using namespace std;

int main()
{
    vector<int> vint = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    list<int> v1, v2, v3;
    copy(vint.begin(), vint.end(), inserter(v1, v1.begin()));
    cout << "Inserter: " << endl;
    for (auto i : v1)
        cout << i << " ";
    cout << endl << " Back Inserter: " << endl;
    copy(vint.begin(), vint.end(), back_inserter(v2));
    for (auto i : v2)
        cout << i << " ";
    cout << endl << "Front Inserter: " << endl;
    copy(vint.begin(), vint.end(), front_inserter(v3));
    for (auto i : v3)
        cout << i << " ";
}