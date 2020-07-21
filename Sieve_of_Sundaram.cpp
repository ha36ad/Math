#include <iostream>
using namespace std;

void SieveofSundaram(int number)
{
    int k = (number-2)/2;
    //Initialize all values as prime
    bool prime_list [k+1];
    prime_list[k+1] = false;
    
    //Flipping booleans (marking as non-prime)
    for (int i = 1; i <= k; i++) //Mark the values that satisfy: 2ij+i+j <= number
    {
      for(int j = i; (2*i*j + i + j) <= k; j++)
      {
         prime_list[ 2*i*j + i + j] = true;  
      } 
    }
    //Accounting for 2 since it is prime
    if (number > 2) 
		cout << 2 << " "; 
    
    //Printing remaining primes
    for (int i = 1; i <= k; i++)
    {
        if (prime_list[i] == false)
        {
            cout <<2*i + 1 <<" ";
        }
    }
}
//Run the program
int main()
{
    int number = 100;
    SieveofSundaram(number);
    return 0;
    
}
