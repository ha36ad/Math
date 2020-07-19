#include <iostream>
using namespace std;

//Factorial function 
int factorial(int n)
{
    int product = 1;
    //Recursive variable
    int i;
    for (i = 2;i<=n;i++)
    {
        product *= i;
    }
    return product;
}

//Run the program
int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    factorial(number);
    cout << factorial(number);
    return 0;
}
