#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int main ()
{
    vector<int> va;
    vector<int> vb;
    int inNum;
    cout << "Input A: " << endl;
    while (cin >> inNum)
        va.push_back(inNum);
    cout << "Input B: " << endl;
    while (cin >> inNum)
        vb.push_back(inNum);
    auto pa = va.begin();
    auto pb = vb.begin();
    if (va.size() <= vb.size()) {
        while (pa != va.end()){
            if (*pa != *pb) {
                cout << "false" << endl;
                return 0;
            }
            cout << "true" << endl;
            ++pa;
            ++pb;
        }
    }
    else {
        while (pb != va.end()){
            if (*pa != *pb) {
                cout << "false" << endl;
                return 0;
            }
            cout << "true" << endl;
            ++pa;
            ++pb;
        }
    }
    return 0;
}