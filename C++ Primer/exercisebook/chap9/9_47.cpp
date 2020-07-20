#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

void func1(string s)
{
    string::size_type pos;
    pos = s.find_first_of("23746");
    while (pos != -1)
    {
        cout << s[pos] << " ";
        pos = s.find_first_of("23746", ++pos);
    }
    cout << endl;
    pos = s.find_first_of("abcdRE");
    while (pos != -1)
    {
        cout << s[pos] << " ";
        pos = s.find_first_of("abcdRE", ++pos);
    }
}

int main()
{
    func1("ab2c3d7R4E6");
}