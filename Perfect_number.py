#Ask user for a number
number = int(input("Enter a positive integer: "))

#Function
def perfect_number(number):
    #Sum of divisors
    sum_of_divisors = 0
    for i in range(1,number):
        if number % i == 0:
            sum_of_divisors+=i
    return sum_of_divisors == number
#Check to see if sum is equal to the number
if (perfect_number(number)) == True:
    print (number,"is a perfect number")
else:
    print(number, "is not a perfect number")
