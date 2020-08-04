#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <set>
using namespace std;

unsigned int ra(long seed = time(0), int min = 0, int max = 100) {
    static default_random_engine e(seed);
    static uniform_int_distribution<unsigned int> u(min,max);
    return u(e);
}

int main()
{
    cout << ra() << " " << ra() << " " << ra() << endl;
    cout << ra(1, 0, 100) << " " << ra(1, 0, 100) << " " << ra(1, 0, 100) << endl;
    cout << ra(0, 50, 100) << " " << ra(0, 50, 100) << " " << ra(0, 50, 100) << endl;
}