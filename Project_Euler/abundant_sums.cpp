#include <iostream>
#include<math.h>
#include <vector>
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
    return (sum - number);
}

bool isAbundant(int number)
{
    if(divisors(number) > number)
    {
        return true;
    }
}

void StoreAbundant(const int limit, std::vector<int> numlist)
{
    for (int i = 1; i < limit; i++)
    {
        if(isAbundant(i))
        {
            numlist.push_back(i);
        }
    }
}
void SumofAbundant( const int limit, std::vector<int> numlist,vector <bool> AsAbundant)
{
    for (int a = 0; a< numlist.size(); a++)
    {
        for (int b = a; b < numlist.size(); b++)
        {   
            if(numlist[a] + numlist[b] <= limit)
            {
                SumofAbundant[AsAbundant[numlist[a] + numlist[b]] = true;
            }
            else
            {
                break;    
            }
            
        }
    }
}

int main(void)
{
    const int limit = 28124;
    unsigned sum = 0;
    vector<int> numlist;
    StoreAbundant(limit,numlist);
    vector <bool> AsAbundant(limit,false);
    SumofAbundant(limit,numlist,AsAbundant);

    for (int j = 0; j < numlist.size(); j++)
    {
        if(!SumofAbundant[j])
        {
            sum += j;
        }
    }
    cout << sum;
}
