#include <iostream>
using namespace std;
// Function to calculate sum of divisors
int sumofdivisors(int number)
{
    //Accumulate all the answers
    int sum=0;
    for (int i=1; i<=number; i++)
    {
         if(number%i==0)
            sum+=i;
    }
return sum;
}
//Run the program
int main()
{
    // change the number here
   int number = 365;
    cout << "Sum of divisors: " << sumofdivisors(number); 
    return 0;

}
