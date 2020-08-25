#include <iostream>
int FindDay (int year, int month,int day)
{
    if (month <= 2)
    {
        month += 12;
        year--;
    }
    int h = (day + 13 * (month + 1) / 5 + year + year / 4 - year / 100 + year / 400) % 7;
    
    switch (h)
    {
    case 0 : return 0; 
    case 1 : return 1;
    case 2 : return 2;
    case 3 : return 3;
    case 4 : return 4;
    case 5 : return 5;
    case 6 : return 6;
    default:break;
    }
}

int main()
{
    int count = 0;
    int day = 1;
    int month[] = {1,2,3,4,5,6,7,8,9,10,11,12};
    for (int i = 1901; i <= 2000; i++)
    {
      for (int m = 0; m < 12; m++)
      {
          if (FindDay(i,month[m],day) == 1)
          {
              count++;
          }
      }
    }
    std::cout << count;
    return 0;
}
