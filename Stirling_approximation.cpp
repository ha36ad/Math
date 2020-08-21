
#include <iostream>
#include <cmath>
int main(void)
{
    int n = 100;
    double approx = 0;
    approx = sqrt(2 * M_PI * n) * pow( n / M_E, n);
    
    std::cout<<approx;
}
