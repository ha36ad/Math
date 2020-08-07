import math

#Ask user for number of terms and expansion
number = int(input("Enter the expansion: "))
expansion = int(input("Enter the number of terms: "))

#Print the Taylor series
def Taylor_series(number):
    #Initialize sum variable
    summation = 0
    for i in range (expansion + 1):
        summation += (number**i)/math.factorial(i)
    return summation

#Run the program
print(Taylor_series(number))

