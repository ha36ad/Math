denom = 0 
length = 0

for i in range(1,1000):
    remainder = []
    value = 1   
    position = 0

    while value not in remainder:
        position += 1
        remainder.append(value)
        value %= i
        value *= 10
        
        if position > length:
            length = position
            denom = i
            
print(denom)

