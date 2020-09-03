#include <iostream>

int main()
{
    int coins[8] = {1,2,5,10,20,50,100,200};
    int ways [201] = {0};
    int len = sizeof(ways) / sizeof(*ways);

    for (int i = 0; i < len; i++)
    {
        for (int j = coins[i]; j <= 200; j++)
        {
            ways[j] += ways[j - coins[i]];
        }
    }
    return 0;
}
