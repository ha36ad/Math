#include <iostream>
using namespace std;

//Function to check whether a number is a palindrome
void palindrome(int number)
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
        cout <<value << " = Palindrome";
    }
    else
    {
        cout <<value << " is not a Palindrome";
    }
    
}

//Run the program
int main()
{
    int number = 12321;
    palindrome(number);
    return 0;
}
