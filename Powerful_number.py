import math

#Ask user for a number
number = int(input("Enter a number: "))

#Find prime factors
def prime_factors(number):
    i = 2
    #Array to store prime numbers
    prime_numbers = []
    
    # Algorithm for prime factorization
    while i*i <= number:
        if number % i != 0:
            i += 1
        else:
             number //= i
             prime_numbers.append(i)
     
    return prime_numbers

#Function for powerful numbers
def Powerful(number):
    unique_primes = prime_factors(number)

    #Filter for unique prime factors
    for i in unique_primes:
        if (number % i != 0 or number % (i*i) != 0):
            return False
    return True

#Run the program
if Powerful(number):
    print ("%d is powerful" %(number))
else:
    print ("%d is not powerful" %(number))


   
