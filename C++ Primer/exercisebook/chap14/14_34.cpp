#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
using namespace std;

class MyClass {
public:
    int operator() (int a, int b, int c) const {
        return a ? b : c;
    }

private:
    int a, b, c;
};