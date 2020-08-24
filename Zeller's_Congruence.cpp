#include <iostream>

int FindDay (int day, int month, int year)
{
    if (month <= 2)
    {
        month += 12;
        year--;
    }
    int h = (day + 13 * (month + 1) / 5 + year + year / 4 - year / 100 + year / 400) % 7;
    
    switch (h)
    {
    case 0 : std::cout << "Saturday"; break; 
    case 1 : std::cout << "Sunday"; break; 
    case 2 : std::cout << "Monday"; break; 
    case 3 : std::cout << "Tuesday"; break; 
    case 4 : std::cout << "Wednesday"; break; 
    case 5 : std::cout << "Thursday "; break; 
    case 6 : std::cout << "Friday "; break; 
    }
    
   return h;
}

int main()
{
    FindDay(22,10,2017); 
    return 0;
}
