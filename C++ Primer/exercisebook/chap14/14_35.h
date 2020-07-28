#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
using namespace std;

class ReadString {
public:
    ReadString(istream &is = cin) : is(is){};
    string operator()() {
        string str;
        if (getline(is, str))
            return str;
        else
            return "";
    }

private:
    istream &is;
};