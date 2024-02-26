#include <iostream>

using namespace std;

int main ()
{
    //declare variables
    double average;
    double batAvg[8];
    double max = -2147483647;
    double min = 2147483647;

    //get battle averages
    for (int i = 0; i < 8; i ++)
    {
        cout << "Enter a battle average: ";
        cin >> batAvg[i];

        if (min > batAvg[i])
        {
            min = batAvg[i];
        }
        if (max < batAvg[i])
        {
            max = batAvg[i];
        }
    }

    //get battle average
    for (int j = 0; j < 8; ++j) {
    average += (batAvg[j])/8 ;
     }

     //output
    cout << "The min is " << min << endl;
    cout << "The max is " << max << endl;
    cout << "The average is " << average << endl;
     
    
    return 0;
}