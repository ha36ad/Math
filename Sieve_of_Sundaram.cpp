#include <iostream>
using namespace std;

int SieveofSundaram(int number)
{
 int i = 1;    
    vector <int> num_list;

      while ( i <= number)
    {
        num_list.push_back(i);
        i++;
    }

}

//Run the program
int main()
{
    int number = 25;
    SieveofSundaram(number);
    return 0;
}
