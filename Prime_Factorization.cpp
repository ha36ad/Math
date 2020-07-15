#include <iostream>
using namespace std;

//number
int number = 35;

void PrimeFactors(int number)
{
    //If Number is divisble by 2, print 2 
   while (number%2 == 0)
   {
       cout << 2 << " ";
       number = number/2;
   }

   //Finding the rest of the factors
   for (int i =3; i<=number; i = i+2)
   {
    while (number%i == 0)
    {
        cout<<i<<" ";
        number = number/i;
    }
   }   
}

//Execute the program
int main()
{
    PrimeFactors(number);
    return 0;
}
