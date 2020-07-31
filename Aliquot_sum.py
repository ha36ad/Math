#Ask user for a number
number = int(input("Enter a number: "))

#Function
def Aliquot_sum(number):
    #Intialize sum variable
    sum = 0
    #Find divisors up to the number
    for i in range(1,number):
        if (number % i == 0):
            sum+=i
    return sum
    
#Run the program
print("The Aliquot sum is: ", Aliquot_sum(number))
