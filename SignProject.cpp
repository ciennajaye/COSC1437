#include <iostream> 

using namespace std;

int main()
{
    string wood;
    string sign;
    string color;
    int price = 35;

    cout << "What type of wood would you like for your sign? ";
    cin >> wood;

    cout << "What do you want your sign to say? ";
    getline(cin, sign);

    getline(cin, sign);
    cout << "Would you like black/white characters or golf-leaf lettering? Type (bw) for black or white or type (g) for gold-leaf lettering: ";
    cin >> color;
    
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

    cout << "Your final price is: $" << price << endl;
    



    return 0;
}