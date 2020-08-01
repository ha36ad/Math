#include <iostream>
#include <math.h>
using namespace std;

//Function
 float R_value(int X[], int Y[], int max) //Enter two arrays of x and y value, with max being the limit
 {
     //Intializing sum variables
     int X_sum = 0;
     int Squared_X = 0;
     int Squared_Y = 0;
     int Y_sum = 0;
     int XY_sum = 0;

     //For loop to find the sum of each variable
     for (int i = 0; i < max; i++)
     {
         //Sum of each individual array
         X_sum += X[i];
         Y_sum += Y[i];
         
         //Find the sum of the product of arrays
         XY_sum += X[i]*Y[i];

         //Sum of squares of arrays
         Squared_X += X[i] * X[i];
         Squared_Y += Y[i] * Y[i];
     }
     //Coefficient formula
     float correlation = (float)(max * XY_sum - X_sum * Y_sum) / sqrtf((max * Squared_X - X_sum * X_sum) * 
     (max * Squared_Y - Y_sum * Y_sum ));
     
     //Return the coefficient
     return correlation;
 }

//Run the program
int main()
{
    //Intialize array values
    int X[] = {12, 14, 16, 18, 20}; 
    int Y[] = {25, 28, 27, 30, 31}; 

    //Finding the size of the array (X and Y should be the same, so only one calculation is required)
    int max = sizeof(X)/sizeof(X[0]);

    //Print the R value
    cout << R_value(X,Y,max);
}
