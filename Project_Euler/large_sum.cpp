#include <fstream>
#include <iostream>
using namespace std;

int main(void)
{
    double sum = 0;
    double num;

    ifstream fin("euler_13.txt");

    while(!fin.eof())
    {
        fin >> num;
        sum += num;
    }
    fin.close();

    //Print the 10 digits
    cout.precision(10);
    cout << sum << endl;
}
