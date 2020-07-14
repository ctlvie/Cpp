#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int main ()
{
    cout << "Input: " << endl;
    string str;
    getline(cin, str);
    int count = 0;
    for (auto p = str.begin(); p != (str.end()); ++p)
    {
        if (*p == 'f') {
            if (*(p+1) == 'f')
                ++count;
            else if (*(p+1) == 'l')
                ++count;
            else if (*(p+1) == 'i')
                ++count;
            else
                ;
            ++p;
        }
    }
        cout << "Count: " << count << endl;
    return 0;
}