#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    unsigned int max =1000000;
    std::string permstring = "0123456789";

   while( max > 0)
   {
    std::next_permutation(permstring.begin(),permstring.end());
    max--;
   } 
   std::cout <<permstring << std::endl;
   return 0;
}
