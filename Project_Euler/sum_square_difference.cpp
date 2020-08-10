#include <iostream>
using namespace std;

//Function to find the sum of squares
int sum_square(int number)
{
    int sum = 0;
    for (int i = 1; i<= number; i++)
    {
        sum = (2 * number * number * number + 3 * number * number +  number) / 6;
    }
    return sum;
}

//Function to find the square of sum
int square_sum(int number)
{
    int sum = 0;

    for (int i = 1; i<= number; i++)
    {
        sum += i;
    }
    return sum * sum;
}

//Run the program
int main()
{
    int result = 0;
    int number = 100;
    result = square_sum(number) - sum_square(number);
    cout<< result;
    return 0;
}
