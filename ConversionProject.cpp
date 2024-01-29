#include <iostream>

using namespace std;

int main()
{
    //declare variables
    double feetNum;
    double meterNum;
    
    //get double feet number from user
    cout << "What measurement in feet would you like to convert: ";
    cin >> feetNum;

    //convert to meters
    meterNum = feetNum/3.281;

    //output to console the new value
    cout << "This is the conversion in meters: " << meterNum << endl; 


    return 0;
}
