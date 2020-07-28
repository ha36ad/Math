#include <iostream>
using namespace std;

//Algorithm function
int Stein(int u, int v)
{
     //Base cases
    if (u == v)
    {
        return u;
    }
    if (u == 0)
    {
        return v;
    }
    if (v == 0)
    {
        return u;
    }
}

//Run the program
int main()
{
    int u = 25;
    int v = 19;
    printf("The GDC is: " ,Stein(u,v));
}
