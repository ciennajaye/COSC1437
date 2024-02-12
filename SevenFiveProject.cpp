#include <iostream>

using namespace std;

int main ()
{
    //print out the letter "E" using asterisks
   for (int row = 1; row <= 5; row++) {
            if (row == 1 || row == 5 / 2 + 1 || row == 5)
                for (int column = 2; column <= 3; column++)
                    cout << "*";
           cout << "*" << endl;
        }
}