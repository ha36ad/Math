#include <iostream>
#include <vector>
using namespace std;

int main()
{
    const int max = 1000000;
    int largest_sequence = 0;
    int number = 0;
    long current_sequence = 0;
    vector <int> numlist(max + 1,-1);
    numlist[1] = 1;

    for (int i = 2; i <= max; i++)
    {
      current_sequence = i;
      int length = 0;
      while (current_sequence != 1 && current_sequence >= i)
      {
          if (current_sequence % 2 == 0)
          {
              current_sequence /= 2;
          }

          else
          {
            current_sequence = 3 * current_sequence + 1; 
          }
          length++;
        }

        numlist[i] = length + numlist[current_sequence];

      if(numlist[i] > largest_sequence)
      {
          largest_sequence = numlist[i];
          number = i;
      }

    }
    cout << number;
}

   
    


            
