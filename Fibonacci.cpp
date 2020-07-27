#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n<=1)
    {
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

//run the program
int main()
{
    int n = 10;
    cout << fibonacci(n);
    return 0;
}
