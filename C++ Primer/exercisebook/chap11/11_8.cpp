#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
using namespace std;

void addWord(vector<string> &v, const string &word)
{
    if (find(v.begin(), v.end(), word) == v.end())
        v.push_back(word);
}

int main()
{
    vector<string> vec = {"a", "b", "c", "d"};
    addWord(vec, "a");
    for (auto i : vec)
        cout << i << " ";
    cout << endl;
    addWord(vec, "e");
    for (auto i : vec)
        cout << i << " ";
    cout << endl;
}