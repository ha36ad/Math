#include <iostream>
#include <cmath>
using namespace std;

int main()
{
float a;
float b;
float c;
//Ask user for inputs
	std::cout << "Enter a value for a: ";
	std::cin >> a;

	std::cout << "Enter a value for b: ";
	std::cin >> b;
//Calculations
a = pow(a,2);
b = pow(b,2);
c = sqrt(a+b);

//Print c
cout << "C: " << c;

return 0;
}
