#include <iostream>
using namespace std;

int main ()
{
    std::cout << "Please input two integer numbers: " << endl;
    int v1, v2;
    std::cin >> v1 >> v2;
    for (int i = v1; i <= v2; ++i)
    {
        std::cout << i << endl;
    }
        return 0;
}