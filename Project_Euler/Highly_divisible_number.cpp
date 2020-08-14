#include <iostream>
using namespace std;

//Generate triangular numbers
int triangle(int n)
{
    int tri_number = (n * (n+1)) / 2;
    return tri_number;
}
 
//Function to find the divisors
int divisors()
{
    int max = 501; //Target # of divisors
    int count = 0;
    int n = 1;

    while (count < max)
    {
        triangle(n); //Generate triangular numbers
        int num = triangle(n);
        int i = 1;
        
        //Finding the divisors of the triangular number
        while (i * i <= num)
        {
            if (num % i == 0)
            {
                count++;

                if (num / i != i)
                {
                    count++;
                }
            }
            i++;
        }
        
        if (count < max)
        {
            count = 0;
            n++;
        }
    }
    return triangle(n);
}

//Run the program
int main()
{
    cout<<divisors();
    return 0;
}
