from random import randint

#Ask user for a number
number = int(input("Give me a number: "))

#Generate a random value for a
a = randint(1,number - 1)

#Check if the number is a prime or not
if pow(a,number-1) % number != 1:
    print ("Not a prime")
else:
    print ("Prime")
