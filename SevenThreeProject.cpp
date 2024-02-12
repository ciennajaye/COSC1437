#include <iostream>

using namespace std;

int main ()
{
    //declare variable
    cout << "0 through 10 multiplied by 2 and by 10" << endl<<endl;
    int num = 0;

    //calculate values and output them
    while (num <= 10)
    {
        cout << "Number: " << num<< endl;
        cout << "Multiplied by 2: " << (num * 2)<< endl;
        cout << "Multiplied by 10: " << (num *10) << endl << endl;
        num++;
    }
    return 0;

}