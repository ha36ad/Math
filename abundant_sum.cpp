#include <iostream>
#include<math.h>
using namespace std;

int divisors(int number)
{
    int sum = 0;
    for (int i= 1; i < sqrt(number); i++)
    {
        if (number % i == 0)
        {
         
            sum += i;
            sum = sum + (number / i);
            
        }
    }
    if (sum - number > number)
    {
       cout<< "Abundant number" << endl;
    }
    return sum - number > 24;
}
int main(void)
{

    cout << divisors(24);
}
