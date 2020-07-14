#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int main ()
{
    cout << "Input your grade: " << endl;
    int inGrade;
    cin >> inGrade;
    string outGrade;
    if (inGrade > 100 || inGrade < 0)
        cout << "Illegal input grade.";
    else
    {
        if (inGrade == 100)
            outGrade = "A++";
        else if (inGrade >= 90 && inGrade < 100)
            outGrade = "A";
        else if (inGrade >= 80 && inGrade < 90)
            outGrade = "B";
        else if (inGrade >= 70 && inGrade < 80)
            outGrade = "C";
        else if (inGrade >= 60 && inGrade < 70)
            outGrade = "D";
        else
            outGrade = "F";
    }
    cout << "Your grade is: " << outGrade << endl;
    return 0;
}