import math 
#Max value of the numbers
MAX_NUMBER = 1000000
limit = int(input("Enter a number: "))

#Using The Sieve of Atkin's to calculate prime numbers
def SieveofAktin(limit):
    #Mark the sieve list as non-prime
    sieve=[False]*limit
