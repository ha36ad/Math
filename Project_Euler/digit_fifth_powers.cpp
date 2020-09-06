 #include <iostream>
 

int main()
{
    int result = 0;
    for (int i = 2; i < 355000; i++){
        int sum = 0;
        int number = i;
        while (number > 0){
           int digit = number % 10;
           number /= 10;
           int temp = 1;
           for (int j = 1; j < 6; j++){
               temp *= digit;
           }
           sum += temp;
        }
        if (sum == i){
            result += i;
        }
    }
    std::cout << result;
}
