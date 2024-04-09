#include <iostream>
#include <string> 

using namespace std;  

     int main()
     {
        //declaring variables
        const int students = 20; 
        string name[students]; 
        int age[students];      
        char grade[students];   

    
        //user name input    
        cout << "Enter names (up to 20): " << endl;
        for (int i = 0; i < students; ++i)
        {
            cout << "Enter name " << (i + 1) << ": ";
            cin >> name[i];
        }

        //age input
        cout << "Enter ages (up to 20): " << endl;
        for (int i = 0; i < students; ++i) {
            cout << "Enter age " << (i + 1) << ": ";
            cin >> age[i];
            if (age[i] < 0) {
                cout << "Enter a number greater than or equal to zero" << endl;
                return 1;  
            }
        }

        //grade input
        cout << "Enter grades (up to 20): " << endl;
        for (int i = 0; i < students; ++i) {
            cout << "Enter grade " << (i + 1) << ": ";
            cin >> grade[i];
            
            if (grade[i] != 'A' && grade[i] != 'B' && grade[i] != 'C' && grade[i] != 'D' && grade[i] != 'F') {
                cout << "Enter a valid letter grade (A, B, C, D, or F): " << endl;
                return 1;  
            }
        }

        //output
        cout << "Entered data:" << endl;
        for (int i = 0; i < students; ++i) {
            cout << "Name: " << name[i] << ", Age: " << age[i] << ", Grade: " << grade[i] << endl;
        }

        return 0;  
    }

