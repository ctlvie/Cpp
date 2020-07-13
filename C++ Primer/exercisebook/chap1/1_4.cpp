#include <iostream>

using namespace std;

int main ()
{
    std::cout << "Please input two numbers:" << endl;
    int v1, v2;
    std::cin >> v1 >> v2;
    int m = v1 * v2;
    std::cout << "Multiplication:" << m << endl;
    return 0;
}