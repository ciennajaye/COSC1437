#include <iostream>

using namespace std;

int main ()
{
    //explaining what the program will do
    cout << "0 through 10 multiplied by 2 and 10" << endl << endl;

    //output
    for (int i = 0; i <= 10; i++)
    {
        cout << "Number: " << i << endl;;
        cout << "Multiplied by 2: " << (i * 2) << endl;
        cout << "Multiplied by 10: " << (i *10) << endl;
        cout << endl;
    }

    return 0;
}