#include <iostream>
#include <cmath>
using namespace std;

//Function to calculate discriminant
void formula(int a, int b, int c)
{
 int discriminant = pow(b,2) - (4*a*c);
 if (discriminant > 0)
 {
     cout<<"Discriminant is positive, hence two solutions";
 }
 else if (discriminant == 0)
 {
     cout<<"Discriminant is zero, hence one solution";
 }
 else if (discriminant< 0)
 {
     cout <<"Discriminant is negative, hence no real solutions";
 }
}

//Run the function
int main()
{
    int a;
    int b;
    int c;
    cout <<"Enter  the a value: ";
    cin >> a;
    cout <<"Enter the b value ";
    cin >> b;
    cout <<"Enter the c value ";
    cin >> c;
    formula(a,b,c); 
return 0;
}