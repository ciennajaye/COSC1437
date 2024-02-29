#include <iostream>
using namespace std;

// functions
int sums(int num);
int products(int num);

int main() {
    //variable
    int num;

    //input and checking if the input is valid
    while (true) {
        cout << "Enter a positive integer or 0 to quit: ";
        cin >> num;

        if (num == 0)
            break;

        if (num < 0) {
            cout << "Please enter a positive integer." << endl;
            continue;
        }

        cout << "The sum is " << sums(num) << "." << endl;
        cout << "The product is " << products(num) << "." << endl;
    }

    return 0;
}

// sum function
int sums(int num) {
    int sum = 0;
    for (int i = 1; i <= num; ++i) {
        sum += i;
    }
    return sum;
}

// products function
int products(int num) {
    int product = 1;
    for (int i = 1; i <= num; ++i) {
        product *= i;
    }
    return product;
}

