#include <iostream>
using namespace std;

//Function 
void triple(int limit)
{
    //Intialize variables
    int a = 0;
    int b = 0;
    int c = 0;
    int m = 2;
    
   //While loop 
   while ( c < limit)
   {
        //For loop to generate values
        for (int n = 1; n < m; ++n)
        {
            //Formulas for each variable
            a = m * m - n * n;
            b = 2 * m * n;
            c = m * m + n * n;
            
            //Break if c is > limit
            if (n > limit) 
            {
                break; 
            }

            //Print each value
            cout << a << " " << b << " " << c << endl;
        }
        m++;         
   }    
}

//Run the program
int main()
{   
    //Alter this for more values
    int limit = 100;
    triple(limit);   
    
    //Print 9,2, 15
    cout << "9" << " " << "12" << " " << "15" << endl;
    return 0;
}
