#include <iostream>
using namespace std;

int main ()
{
    int val1 = 10, val2 = 20;
    std::cout << "Initial: " << val1 << " " << val2 << endl;
    int *p = &val1;
    p = &val2;
    *p = 30;
    std::cout << "After: " << val1 << " " << val2 << endl;
    return 0;
}