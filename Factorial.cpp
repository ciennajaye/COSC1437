#include <iostream>

using namespace std;

int factorial (int);

int main ()
{
    //declaring variables
    int fact;
    int factorialNum;
    cout << "Enter a number to determine it's factorial: ";
    cin >> fact;
    fact = factorial (fact);

    //output
    cout << "Factorial is: " << fact << endl;
    
       return 0;


}

//recursive method to determine factorial
int factorial (int n)
{
    if (n==0)
    {
        return 1;
    }
    return n*factorial(n-1);
}