from sympy import sieve

sum = 0 
for i in sieve.primerange(1,2000001):
   sum += i

print(sum)
