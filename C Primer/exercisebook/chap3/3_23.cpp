#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int main ()
{
    cout << "Input 10 numbers: " << endl;
    vector<int> ivec;
    while (ivec.size() != 10)
    {
        int inNum;
        cin >> inNum;
        ivec.push_back(inNum);
    }
    for (auto p = ivec.begin(); p != ivec.end(); ++p)
    {
        *p = 2 * (*p);
    }
    cout << "After: " << endl;
    for (auto p : ivec)
    {
        cout << p << " ";
    }
    return 0;
}