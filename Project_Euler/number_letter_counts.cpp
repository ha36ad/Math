#include <iostream>
#include <vector>

int convert(int x)
{

  switch(x)
  {   
    case 0: return 4;
    case 1: return 3;
    case 2: return 3;
    case 3: return 5;
    case 4: return 4;
    case 5: return 4;
    case 6: return 3;
    case 7: return 5;
    case 8: return 5;
    case 9: return 4;
    case 10: return 3;
    case 11: return 6;
    case 12: return 6;
    case 13: return 8;
    case 14: return 8;
    case 15: return 7;
    case 16: return 7;
    case 17: return 9;
    case 18: return 8;
    case 19: return 8;
    default: break;
  }
    

    if (x >= 20 && x < 100)
    {
        int unit = x % 10;
        int tens = x / 10;
        int sum = 0;

        if (unit != 0)
        {
          sum = convert(unit);
        }

        switch(tens)
    {
        case 2: return 6 + sum;
        case 3: return 6 + sum;
        case 4: return 5 + sum;
        case 5: return 5 + sum;
        case 6: return 5 + sum;
        case 7: return 7 + sum;
        case 8: return 6 + sum;
        case 9: return 6 + sum;
    }

    }

  if (x >= 100 && x < 1000)
  {
    int unitandtens = x % 100;
    int hundreds = x / 100;
    int sum2 = 0;

    if (unitandtens != 0)
      {
        sum2 = convert(unitandtens);
      }

    return convert(hundreds)  + sum2;
  }

}

int main()
{
  int total = 0;
  const int THOUSAND = 11;
  const int ANDHUNDRED = 8910;
  const int HUNDRED = 63;
  for (int i = 1; i < 1000; i++)
  {
    int y = convert(i);
    total += y;
  }
  std::cout <<total + THOUSAND + ANDHUNDRED + HUNDRED;
}
