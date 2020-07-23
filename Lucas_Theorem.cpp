#include <iostream>
using namespace std;

//Main Function
int LucasnCr (int number, int r, int p)
{
//Pascal's triangle
int C [r+1];
C[r+1] = 0;
C[0] = 1;
for (int i =1; i <= number; i++)
{
    for (int j = 0; j <= i; i++)
    {
        C[j] = C[j]+ C[j-1] %p;
    }
}
//Main function
int LucasnCrmain (int n, int r, int p)
{
    //Base case
    if (r==0)
    {
        return 1;
    }

    int n = number%p;
    int ri = r%p;
    return (LucasnCrmain(number/p, r/p,p) * (LucasnCr(n,ri,p))%p);
}
  
//Running the program
int main()
{
  int number = 1000;
  int r = 300;
  int p = 13;
  cout << "NcR is " << LucasnCrmain (n,r,p);
  return 0;
}
