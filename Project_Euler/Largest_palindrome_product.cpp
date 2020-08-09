#include <iostream>
using namespace std;

//Function to check whether a number is a palindrome
bool palindrome(int number)
{
    int rev = 0;
    //Store the number into another variable for comparisons to rev
    int value;
    value = number;
    
    while (number > 0)
    {
       rev = rev * 10 + number % 10;
        number /= 10;
    }
     if (value == rev)
    {
        return true;
    }
     else
     {
        return false;
     }
}

//Run the program
int main()
{ 
    //Variable to store palindrome
    int n = 0;
    for (int i = 100; i < 1000; i++) //Generate numbers from 100 to 999
    {

        for (int j = i; j < 1000; j++) //Generate numbers from 100 to 999
        {
            int x = i * j; //Find the product

            if ( x > n && palindrome(x)) //Check if product is a palindrome, and check if its greater than the current palindrome
            {
                n = x; //If greater than current palindrome and it is a palindrome, assign new value for n
            }
        }
    }
   cout << n;
    return 0;
}
