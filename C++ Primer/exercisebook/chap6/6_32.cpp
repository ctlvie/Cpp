#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

void print(vector<int> vint, unsigned int index)
{
    int size = vint.size();
    if (!size)
    {
        cout << "Empty vector." << endl;
        return;
    }
    else 
    {
        if (index == size - 1)
        {
            cout << vint[index] << endl;
            return;
        }
        else
        {
            cout << vint[index] << " ";
            print(vint, index + 1);
        }
    }
}

int main()
{
    vector<int> vint(10, 2);
    print(vint, 0);
    vector<int> vempty;
    print(vempty, 0);
}