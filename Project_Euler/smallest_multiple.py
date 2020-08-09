from math import gcd as gcd

#Find the least common multiple of two numbers
def lcm(x , y):
    return (int)((x * y) / gcd(x , y))

multiple = 1
#Find the least common multiples from 1 to 20
for i in range(1,21):
    multiple =  lcm(multiple, i)

print(multiple)
