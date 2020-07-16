#Ask user for input
number_1 = int(input("Enter your first number: "))
number_2 = int(input("Enter your second number: "))

#Find GCD
def gcd(number_1, number_2):
    if number_1 == 0:
        return number_2
    return gcd(number_2 % number_1, number_1)

#Find LCM
def lcm (number_1,number_2):
    return (number_1*number_2 / gcd(number_1,number_2))

print("The LCM is: ", lcm(number_1,number_2))
