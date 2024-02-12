#include <iostream>

using namespace std;

int main()
{
    //declare variables
    int rating;
    double average;
    int count = 1;

    //Ask for first rating
    cout << "Enter Rating for top song: ";
    cin >> rating;
    average+=rating;

    //Ask for ratings while the rate is greater than 0
    while (rating >= 0)
    {
        cout << "Enter Rating for top song: ";
        cin >> rating;
        if (rating < 0)
        {
            average+=0;
        }
        else
        {
            average+=rating;
            count++;
        }
        
    }

    //output the average rate
    cout << "Average Star Value: " << average/count << endl;
    return 0;
}