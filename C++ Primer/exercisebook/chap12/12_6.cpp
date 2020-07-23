#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <set>
using namespace std;

void addMem(vector<int> *pv)
{
    int temp;
    while (cin >> temp)
        pv->push_back(temp);
}

void printMem(vector<int> *pv)
{
    cout << "Print:" << endl;
    vector<int>::iterator beg = pv->begin();
    for (; beg != pv->end(); ++beg)
        cout << *beg << " ";
}

int main()
{
    vector<int> *pv = new vector<int>;
    addMem(pv);
    printMem(pv);
    delete pv;
}