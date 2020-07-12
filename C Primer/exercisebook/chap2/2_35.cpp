#include <iostream>
using namespace std;

int main ()
{
    const int i = 42;
    const auto j2 = i, &k2 = i;
    std::cout << "i: " << typeid(i).name() << "\nj2: " << typeid(j2).name() << "\nk2: " << typeid(k2).name() << endl;
    return 0;
}