#include <iostream>
using namespace std;

// functions
void discount();
void noDiscount();

int main() {

    //variable
    char preregistered;
    
    //input
    cout << "Did you preregister? Enter Y or N: ";
    cin >> preregistered;
    
    //check if valid input
    if(preregistered == 'Y' || preregistered == 'y') {
        discount();
    } else if(preregistered == 'N' || preregistered == 'n') {
        noDiscount();
    } else {
        cout << "Invalid input. Please enter Y or N." << endl;
    }
    
    return 0;
}

// discount function
void discount() {
    cout << "You are pre-registered and qualify for a 5% discount." << endl;
}

// no discount function
void noDiscount() {
    cout << "Sorry, you did not pre-register and do not qualify for a 5% discount." << endl;
}

