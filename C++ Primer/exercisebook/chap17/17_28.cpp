#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <set>
using namespace std;

unsigned int ra() {
    static default_random_engine e(time(0));
    static uniform_int_distribution<unsigned int> u(0,100);
    return u(e);
}

int main()
{
    cout << ra() << " " << ra() << " " << ra() << endl;
}