#include <iostream>
using namespace std;

int main()
{
    int sum = 1000;
    int product = 0;
    int a = 0;
    int b = 0;
    int c = 0;

    for (a = 1; a < sum /3; a++)
    {
        for (b = a; b < sum /2; b++)
        {
            c = 1000 - a -  b;
            if (a* a + b * b == c* c)
            {
                product = a * b * c;
                cout<< product;
            }
        }
    }
    return 0;
}
