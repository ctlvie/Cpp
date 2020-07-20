#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

string func(string s, const string front, const string back)
{
    s.insert(s.begin(), front.begin(), front.end());
    s.insert(s.end(), back.begin(), back.end());
    return s;
}

int main()
{
    string str = "Boyu Qin";
    cout << func(str, "Mr." , "II");
}