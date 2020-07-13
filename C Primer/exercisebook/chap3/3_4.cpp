#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main ()
{
    string str_a, str_b;
    cout << "Input String A: " << endl;
    cin >> str_a;
    cout << "Input String B: " << endl;
    cin >> str_b;
    if (str_a == str_b) {
        cout << "Two strings are equal." << endl;
    } else {
        if (str_a > str_b)
            cout << "The bigger one is: " << str_a << endl;
        else
            cout << "The bigger one is: " << str_b << endl;
    }
    return 0;
}