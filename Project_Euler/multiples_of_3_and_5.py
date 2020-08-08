#Ask user for a number
number = int(input("Enter a number: "))
sum = 0
#Find the sum of the multiples of 3 and 5 until the desired number
for i in range(number):
    if (i % 3 == 0 or i % 5 == 0):
        sum += i
print(sum)
