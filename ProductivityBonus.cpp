#include <iostream>

using namespace std;

int main()
{
    //declare variables
   string firstName;

   int numShift;

   int numTransaction;

   int transactionDollar;

   int productivityScore;

   int bonus;

   
    //get name
   cout<<"Employee’s first name: ";

   cin>>firstName;

    //get number of shifts
   cout<<"Number of shifts:";

   cin>>numShift;

    //get number of transactions
   cout<<"Number of transactions: ";

   cin>>numTransaction;

    //get dollar value
   cout<<"Transaction dollar value:";

   cin>>transactionDollar;

    //calculate productivity score
   productivityScore = (transactionDollar/numTransaction)/numShift;


    //determine bonus and output it
   if (productivityScore <= 30)
   {

       bonus =50;

       cout<<"Employee’s first name: "<<firstName<< endl;

       cout<<"Bonus: $"<<bonus << endl;
   }
   else if (productivityScore > 30 && productivityScore < 79)
   {
        bonus = 75;
        cout<<"Employee’s first name: "<<firstName<< endl;

        cout<<"Bonus: $"<<bonus << endl;
   }
    else if (productivityScore >= 79 && productivityScore <=199) 
   {

       bonus = 100;

       cout<<"Employee’s first name: "<<firstName << endl;

       cout<<"Bonus: $"<<bonus << endl;

   }
   else if (productivityScore >= 200)  

   {

       bonus =200;

       cout<<"Employee’s first name: "<<firstName<< endl;

       cout<<"Bonus: $"<<bonus << endl;

   }



    return 0;
}