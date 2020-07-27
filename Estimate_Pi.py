import random
#Number of iterations
TOTAL = 10000
#Points
circle_points = 0
total_points = 0

for i in range(0,TOTAL):
 #Randomly generate points
 x = random.uniform(-1,1)
 y = random.uniform(-1,1)
  #Calculate distance
 distance = x**2 + y**2
 if distance <=1:
    circle_points+=1
    total_points+=1

#Calculate pi
 pi = 4 * circle_points /total_points

#Printing pi
print(pi)
