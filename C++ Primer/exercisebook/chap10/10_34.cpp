#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
    vector<int> v1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    ostream_iterator<int> out(cout, " ");
    copy(v1.begin(), v1.end(), out);
    cout << endl;
    copy(v1.rbegin(), v1.rend(), out);
}