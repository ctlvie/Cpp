#include <iostream>
using namespace std;

int main ()
{
    int v;
    int sum = 0;
    while (std::cin >> v)
    {
        sum += v;
    }
    std::cout << "Sum: " << sum << endl;
    return 0;
}