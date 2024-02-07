#include <iostream>

using namespace std;

int main()
{
    int num1 = -50;
    int num2 = 53;
    int num3 = 78;

    if (num1 > num2 && num1> num3)
    {
        cout << "Largest number is " << num1 << endl;
        
    }
    else if (num2 > num1 && num2 > num3)
    {
        cout << "Largest number is " << num2 << endl;
        
    }
    else if (num3 > num1 && num3 > num2)
    {
        cout << "Largest number is " << num3 << endl;
        
    }



    if (num1 < num2 && num1< num3)
    {
        cout << "Smallest number is " << num1 << endl;
        
    }
    else if (num2 < num1 && num2 < num3)
    {
        cout << "Smallest number is " << num2 << endl;
        
    }
    else if (num3 < num1 && num3 < num2)
    {
        cout << "Smallest number is " << num3 << endl;
        
    }
}