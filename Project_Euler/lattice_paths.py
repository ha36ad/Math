from math import factorial
def binom(n,k):
    return factorial(n) / (factorial(k) * factorial((n-k)))
x = str(binom(40,20))
print(x)
