#include <iostream>
using namespace std;

//Generate Fibonnaci numbers
int Fibonnaci()
{
    int MAX = 4000000;
    int t1 = 1;
    int t2 = 2;
    int t3 = 0;
    int sum = 0;
    while (t3 <= MAX)
    {
        t3 = t1 + t2;
        t1 = t2;
        t2 = t3;
     if (t3 % 2 == 0)
     {
         sum += t3;
     }
    }
    return sum + 2;
}

//Run the program
int main()
{
    int sum;
    Fibonnaci();
    cout << sum;
    return 0;
}
