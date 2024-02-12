#include <iostream>

using namespace std;

int main ()
{
    //declare variables
    string employeeFirstName;
    string employeeLastName;
    int numPerformanceRate;
    double numSalary;
    double score;
    double bonus;

    //get first name
    cout << "Enter employee's first name: ";
    cin >> employeeFirstName;

    //get salary
    cout << "Enter employee's salary: ";
    cin >> numSalary;

    // get performance rating
    cout << "Employee’s performance rating: ";
    cin >> numPerformanceRate;

    //determine bonus
    switch (numPerformanceRate) {
        case 1:
        bonus = numSalary * .25;
        break;
        case 2:
        bonus = numSalary * .15;
        break;
        case 3:
        bonus = numSalary * .1;
        break;
        case 4:
        bonus = numSalary;
        break;
        default:
        cout << "Invalid performance rating" << endl;
        return 1;
    }

    //ouput
    cout << "Employee Name: " << employeeFirstName << endl;
    cout << "Employee Salary: "<< numSalary << endl;
    cout << "Employee Rating: " << numPerformanceRate << endl;
    cout << "Employee Bonus: $" << bonus << endl;

    return 0;
    }
