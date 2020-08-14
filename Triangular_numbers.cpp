#include <iostream>
using namespace std;

//Function to generate triangular numbers
int triangle(int n)
{
    return ((n +1 ) * n) / 2;
}

//Run the program
int main()
{
    //Change n here
    int n = 1;
    cout << triangle(n);
    return 0;
}
