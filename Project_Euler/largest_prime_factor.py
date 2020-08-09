from math import sqrt

#Initialize prime array
prime_array = []

def primefactor(number):
    #Prime factor number
    for i in range (2, (int)(sqrt(number))):
        while number % i == 0:
            prime_array.append(i)
            number /= i

#Run the program
primefactor(600851475143)

x = len(prime_array)

for i in range (0, x):
    if prime_array[0] < prime_array[i]:
        prime_array[0] = prime_array[i]

print (prime_array[0])

