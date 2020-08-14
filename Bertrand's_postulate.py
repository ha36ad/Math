from sympy import isprime
#The program prints all primes between n and 2*n-2
#Change number here
n = 25

#Check Betrand's postulate
for i in range(n, 2 * n - 2):
    if isprime(i):
        print(i)
