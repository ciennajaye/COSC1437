#include <iostream>
using namespace std;

// functions
void sum(float num1, float num2);
void difference(float num1, float num2);
void product(float num1, float num2);

int main() {
    //variables
    float num1, num2;

    // user input
    cout << "Enter first numeric value: ";
    cin >> num1;

    cout << "Enter second numeric value: ";
    cin >> num2;

    // display results
    sum(num1, num2);
    difference(num1, num2);
    product(num1, num2);

    return 0;
}

// sum function
void sum(float num1, float num2) {
    cout << "Sum is: " << num1 + num2 << endl;
}

// difference function
void difference(float num1, float num2) {
    cout << "Difference is: " << num1 - num2 << endl;
}

// product function
void product(float num1, float num2) {
    cout << "Product is: " << num1 * num2 << endl;
}
