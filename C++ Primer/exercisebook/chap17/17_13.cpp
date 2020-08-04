#include <iostream>
#include <string>
#include <vector>
#include <bitset>
#include <set>
using namespace std;

class exam {
public:
    exam() : key("1010101010"){};
    int score(bitset<10> s) {
        int sc = 0;
        for (auto i = 0; i < 10; ++i)
        {
            if (s[i] == key[i])
                ++sc;
        }
        return sc;
    }

private:
    bitset<10> key;
    bitset<10> answer;
};

int
main()
{
    exam e;
    bitset<10> x{"1010100010"};
    cout << e.score(x);
}