#include <iostream>
using namespace std;

//Generate Fibonnaci numbers
void Fibonnaci()
{
    int MAX = 1000;
    int t1 = 2;
    int t2 = 8;
    int t3 = 0;
    int sum = 0;
    while (t1 <= MAX)
    {
        sum += t1;
        t3 = t2;
        t2 = 4 * t2 + t1;
        t1 = t3;
    }
}


//Run the program
int main()
{
    int sum;
    Fibonnaci();
    cout << sum;
    return 0;
}
