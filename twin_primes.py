from sympy import isprime

#Ask user for a two numbers
a = int(input("Enter a postive integer greater than 2: "))
b = int(input("Enter a positive integer greater than 2: "))

#Function to check if a and b are twin primes
def check(a,b):

    #Check if a and b are the same
    if  a == b:
        print("Input has to be different positive numbers")
    
    #Check for a difference of 2
    elif (b == a - 2 or a == b - 2):
        print ("Twin primes")

    #Not twin prime case
    else:
        print("Not twin primes")

#Check if a and b are prime
if(isprime(a) and isprime(b)):
    check(a,b)
else:
    print("Not prime numbers")
