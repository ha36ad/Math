from sympy import isprime
from sympy import sieve


largest = 0
max_a = 0
max_b = 0

prime_list = []
for i in sieve.primerange(1,1000):
  prime_list.append(i)


for a in  range (-999,1001):
    for b in prime_list:
        n = 0
        while isprime(n ** 2 + a * n + b):
            n += 1
        if n > largest:
            max_a = a
            max_b = b
            largest = n

print(max_a * max_b)
