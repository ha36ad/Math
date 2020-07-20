import math 
#Max value of the numbers
MAX_NUMBER = 1000000
number = int(input("Enter a number: "))
limit = int(input("Enter a limit for the Sieve: "))

def SieveofAktin(limit):
    # In the cases of 2 and 3
    if (limit > 2):
           print(2)
    if (limit > 3):
           print(3)
    # Mark the sieve list as non-prime
    sieve = [False]*limit
     # Finding the modulo remainders
    x = 1
    while (x*x < limit):
        y = 1
        while(y * y < limit):
           
            # Case 1
            z = (4*x*x)+(y*y)
            # A modulus of 12 is used to reduce the # of conditions
            if (z <= limit and (z % 12 == 1 or z % 12 == 5)):
                sieve[z] ^= True

            # Case 2
            z = (3*x*x)+(y*y)
            if (z <= limit and z % 12 == 7):  # Account for 7, 19, 31, 43
              sieve[z] ^= True
              
       # Case 3:
            z = (3 * x * x) - (y * y) 
            if ( x > y and z<= limit and  z % 12 == 11): #Account for 11, 23, 47, 59
                sieve[z] ^= True
            y+=1
        x+=1
        
    # Marking remaining squares as non-prime
    r = 5
    while (r * r < limit):
        if (sieve[r]):
            for i in range (5, limit, r*r):
                sieve[i] = False
    # Store primes 
    for j in range(5 , limit): 
        if (sieve[j]): 
            prime_numbers.append(j)
            
#Calculating Primorial
def Primorial(number):  
    # Multiply first n primes  
    result = 1;  
    for i in range(number): 
        result = result * prime_numbers[i];  
    return result;  

#Run the program
SieveofAktin(limit)
print("The primorial of ",number ,"is", Primorial(number))
