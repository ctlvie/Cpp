#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int main()
{
    vector<int> v1{1, 2, 3, 4, 5};
    vector<int> v2{1, 4, 54, 32, 4};
    vector<int> v3{1, 2, 3, 4, 5};
    cout << (v1 == v2) << endl;
    cout << (v1 == v3) << endl;
}