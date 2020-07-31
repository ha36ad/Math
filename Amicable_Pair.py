import math
#Ask user for a number
number = int(input("Enter a number: "))
number_2 = int(input("Enter another number: "))

#Function to find Amicable pair
def Amicable(number,number_2):
    if (Sum_of_Divisors(number) == number_2):
          print ("Amicable Pair")
    else:
          print (" Not an Amicable Pair")
    
#Function to find  sum of divisors
def Sum_of_Divisors(number):
    #Case for an input of 1
    if (number == 1):
        return 1
    #Case for 0
    elif (number == 0):
        return 0

    #Intialize sum variable
    sum = 0

    #Finding divisors of the first number
    for i in range(2, int(math.sqrt(number))+1):
        if (number % i == 0):
            if(i == (number / i)):
                sum+=i
            else:
                sum = sum + (i + number / i)
    return(sum + 1)

    #Run the program
Amicable(number,number_2)

