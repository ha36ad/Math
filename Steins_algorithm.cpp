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
     //Check for factors of 2
     if (~u & 1) //  if u even
     {
          if (v & 1) // if v odd
          {
               return Stein(u >> 1, v);
          }
          else //both are even
            {
                 return Stein(u >> 1, v >> 1) << 1;
            }
     }
     if (~v &1) // u is odd and v is even
     {
          return Stein(u, v >> 1);
     }
   //Reducing larger cases
       if (u > v)
       {
           return Stein((u - v) >> 1, v);
       }

    return Stein((v - u) >> 1, u);
}


//Run the program
int main()
{
    int u = 34;
    int v = 24;
    cout <<"The GCD is: " << Stein(u,v);
    return 0;
}
