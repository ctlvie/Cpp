#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <set>
using namespace std;

void addMem(shared_ptr<vector<int>> pv)
{
    int temp;
    while (cin >> temp)
        pv->push_back(temp);
}

void printMem(shared_ptr<vector<int>> pv)
{
    cout << "Print:" << endl;
    vector<int>::iterator beg = pv->begin();
    for (; beg != pv->end(); ++beg)
        cout << *beg << " ";
}

int main()
{
    auto pv = make_shared<vector<int>>();
    addMem(pv);
    printMem(pv);
}