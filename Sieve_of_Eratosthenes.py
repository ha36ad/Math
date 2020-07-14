import math

#Ask user for a number
number =int(input("Enter an integer:"))

#Creating an array
prime_numbers = []

#Storing all numbers 
for i in range (2,number+1):
    prime_numbers.append(i)
#Deleting multiples
j = 2
while(j<=int(math.sqrt(number))):
    for i in range (j*j,number+1,j):
        if i in prime_numbers:
            prime_numbers.remove(i)
    j = j+1
print(prime_numbers)
