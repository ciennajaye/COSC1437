#include <iostream>

using namespace std;

int main()
{  
    //declare variables
    string name;
    int space = 0;

    //getting users name
    cout << "To create a unique name, type in your first and last name: ";
    getline(cin, name);

    //finding the index number of the space
   space = name.find(" ");

    //outputting initials
    cout << "Your initials: ";
    cout << name[0] << name[space + 1] << endl;

    //separating last name from first name
    string last = name.substr(space,name.length());

    //separating first name from last name
    string first = name.substr(0,space);

    //printing first unique name
    cout << "Your first unique name: " << first.substr(0,first.length()/2) + last.substr(last.length()/2, last.length()) << endl ;

    //printing second unique name
    cout << "Your second unique name: " << name.substr(space+1, (last.length()-1)/2) + name.substr(first.length()/2,space-2) << endl ;

    return 0;
}