#Ask user for an array
elements = int(input("Enter the number of elements: "))
#Initalize array
search_array = []

#Ask user for elements
for i in range (elements):
    numbers = int(input("number: "))
    search_array.append(numbers)

#Find the largest and smallest numbers
upperbound = max(search_array)
lowerbound = min(search_array)
#Ask user for finding a number within the array
search_number = int(input("Enter the number that you're looking for: "))

#Function for binary search
def binary_search(search_array,search_number,lowerbound,upperbound):
    while lowerbound <= upperbound:
        middle = (lowerbound + upperbound) // 2

        if search_array[middle] == search_number:
            return middle
        #If the desired number is less than the current middle, increase the lowerbound
        elif array[mid] < search_number:
            lowerbound = middle + 1
        #If the desired number is greater than the upperbound, decrease the upperbound
        else:
            upperbound = middle - 1

    return 0

#Run the program
result = binary_search(search_array,search_number,lowerbound,upperbound)

if result != 0:
    print ("Element is present at " + str(result))
else:
    print ("Does not exist")

