#Array to hold numbers
catalan_number = []

def Catalan_number(n):
    #Check for base case
    if n<=1:
        return 1
    temp_number = 0
    for i in range (n):
        temp_number += Catalan_number(i) * Catalan_number(n-i-1)
    return temp_number

#Store the numbers in an array
for i in range(15):
    catalan_number.append(Catalan_number(i))
#Print the numbers
print(catalan_number)
