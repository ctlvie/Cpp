#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("data.txt");
    map<string, int> m;
    string word;
    while (in >> word)
        ++m[word];
    for (auto i : m)
        cout << i.first << " : " << i.second << endl;
}