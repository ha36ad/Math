import math
limit = 10000
results = []

def divisors(number):
    sum = 0
    for i in range(2, int(math.sqrt(number))+1):
        if (number % i == 0):
            if(i == (number / i)):
                sum+=i
            else:
                sum += (i + number / i)
    return(sum + 1)

for i in range(2, limit):
    j = divisors(i)
    if  divisors(j) == i and j != i:
           results.append([i,j])
print(results)
