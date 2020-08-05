#include <iostream>
using namespace std;

//Use sieving to generate primes less than the number
void Sieve_of_Eratosthenes (int number,bool prime [])
{
    //Initialize array as true
    for (int i = 0; i <= number; i++)
    {
        prime[i] = true;
    }
    //Mark all multiples of 2 as false
    for (int i = 2; i*i<=number; i++)
    {
        if (prime[i] == true)
        {
            for (int j = i*2; j<=number; j+=i)
            {
                prime[j] = false;
            }

        }
    }

}

//Check if  Mersenne prime
void isPrime(int number)
{
     //Create a boolean array 
    bool prime[number+1];
    //Generate prime numbers
    Sieve_of_Eratosthenes(number,prime);

    //Generate numbers in form of 2^k-1
    for (int k = 2; ((1<<k)-1) <= number; k++)
    {
       long long num = (1<<k) -1;

       if (prime[num])
       {
           cout << num << " ";
       }
    }
}

//Run the program
int main()
{
    //Change number here
    int number = 100;
    cout <<"Mersenne primes up to " << number << " are" << endl;
    isPrime(number);
    return 0;
}
