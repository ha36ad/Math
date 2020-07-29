#Ask user for a number
number = float(input("Enter a number: "))
#Controls precision
epilson = 0.00001

def Square_root(number):  
    #check if number is 0 
    if (number == 0):
     print("The square root is 0")
    #check if number is 1
    if (number ==1):
        print("The square root is 1")
    #check if number is negative
    elif (number < 0):
        print("Input positive values only")
    #Ask user for a guess
    guess =  float(input("What is your initial guess?: "))

    #Main algorithm
    x = guess
    y= 1
    while (x-y >= epilson):
     x = (x +number/x)/2.0
     y = number/x
    return x 

#Print square root
print("The square root of ", number, " is ", (round(Square_root(number),7))
