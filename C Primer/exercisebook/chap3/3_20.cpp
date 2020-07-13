#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int main ()
{
    cout << "Input: " << endl;
    int i;
    vector<int> ivec;
    while (cin >> i) 
    {
        ivec.push_back(i);
    }
    cout << "Res1: " << endl;
    for (auto p = ivec.begin(); p != (ivec.end() - 1); ++p)
    {
        cout << (*p + *(p + 1)) << "  ";
    }
    cout << endl;

    cout << "Res2: " << endl;
    auto front = ivec.begin();
    auto rear = ivec.end() - 1;
    for (; front != (ivec.begin() + ivec.size() / 2); ++front)
    {
        cout << (*front + *rear) << "  ";
        --rear;
    }
        return 0;
}