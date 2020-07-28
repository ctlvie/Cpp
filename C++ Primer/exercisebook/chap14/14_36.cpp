#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include "14_35.h"
using namespace std;

int main()
{
    ReadString r1;
    vector<string> vec;
    cout << "Input: (q to quit)" << endl;
    string str;
    while (str != "q")
    {
        str = r1();
        vec.push_back(str);
    }
    cout << "Output: " << endl;
    for (auto i : vec)
        cout << i << endl;
}