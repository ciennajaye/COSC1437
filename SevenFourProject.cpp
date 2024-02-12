#include <iostream>

using namespace std;

int main ()
{
    //declare variable and explain what program will do
    int num = 0;
    cout << "0 through 10 multiplied by 2 and 10" << endl;

    //calculate and ouput values
    do
    {
        cout << "Number: " << num << endl;
        cout << "Multiplied by 2: " << (num*2) << endl;
        cout << "Multiplied by 10: " << (num*10) << endl << endl;
        num++;
    }
    while (num <=10);
    
    return 0;
}