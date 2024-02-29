#include <iostream>
using namespace std;

// function
void reverseArray(int arr[], int size);

int main() {
    //variables
    const int size = 5;
    int numbers[size];

    // user input
    for (int i = 0; i < size; ++i) {
        cout << "Enter #" << i + 1 << ": ";
        cin >> numbers[i];
    }

    // ouput original array
    cout << "\nOriginal contents of array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << numbers[i] << endl;
    }

    // function call to reversed array
    reverseArray(numbers, size);

    // print the reversed array
    cout << "\nReversed contents of array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << numbers[i] << endl;
    }

    return 0;
}

// reverse array
void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        // swap elements
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        
        ++start;
        --end;
    }
}

