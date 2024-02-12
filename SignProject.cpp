#include <iostream> 

using namespace std;

int main()
{
    //declare variables
    string wood;
    string sign;
    string color;
    int price = 35;

    //ask user for wood type
    cout << "What type of wood would you like for your sign? ";
    cin >> wood;

    //ask user for what do they want the sign to say
    cout << "What do you want your sign to say? ";
    getline(cin, sign);
    getline(cin, sign);

    //ask user what color characters they want
    cout << "Would you like black/white characters or golf-leaf lettering? Type (bw) for black or white or type (g) for gold-leaf lettering: ";
    cin >> color;
    
    //determine the final price
    if (sign.length() > 5)
    {
        price += (sign.length()-5) *4;
    }

    if(wood == ("oak"))
    {
        price+=20;
    }

    if (color == ("g"))
    {
        price+=15;
    }

    //output final price
    cout << "Your final price is: $" << price << endl;
    



    return 0;
}