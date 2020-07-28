#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
using namespace std;

class myComp
{
public:
    myComp(int inVal) : val(inVal) {}
    bool operator()(int inVal) const {
        return inVal == val;
    }

private:
    int val;
};

int main()
{
    myComp com(5);
    vector<int> ivec = {1, 2, 3, 4, 5, 5, 6, 7, 8, 9};
    for (auto i : ivec)
        cout << i << " ";
    cout << endl;
    replace_if(ivec.begin(), ivec.end(), com, 8);
    for (auto i : ivec)
        cout << i << " ";
    cout << endl;
}