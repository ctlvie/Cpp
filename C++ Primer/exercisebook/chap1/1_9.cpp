#include <iostream>

using namespace std;

int main ()
{
    int v = 50;
    int sum = 0;
    while (v <= 100)
    {
        sum += v;
        ++v;
    }
    std::cout << sum << endl;
    return 0;
}