#include <iostream>

using namespace std;

int main ()
{
    std::cout << "Please input two numbers:" << endl;
    int v1, v2;
    std::cin >> v1 >> v2;
    std::cout << v1 << " multiple " << v2 << " equals to " << (v1*v2) << endl;
    return 0;
}