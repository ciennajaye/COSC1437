#include <iostream>

using namespace std;

int main ()
{
    //declare variables
    int left = 0;
    int right = 0;
    string LorR;

    //prompt user for L or R and count how many left/right handed people there are
    cout << "Enter an L if you are left-handed, an R if you are right-handed or X to quit: ";
    cin >> LorR;
    if (LorR == "L")
    {
        left++;
    }
    else{
        right++;
    }

    while (LorR != "X")
    {
        cout << "Enter an L if you are left-handed, an R if you are right-handed or X to quit: ";
    cin >> LorR;
    if (LorR == "L")
    {
        left++;
    }
    else if (LorR == "R")
    {
        right++;
    }
    else{
        right+=0;
        left+=0;
    }
    }

    //output
    cout << "Number of left-handed students: " << left << endl;
    cout << "Number of right-handed students: " << right << endl;
    return 0;
}