fib_seq = [0,1]
i = 2

while i:
    t3 = fib_seq[i-1] + fib_seq[i-2]
    fib_seq.append(t3)
    
    if t3 > 10**999:
        print(i)
        break
    i+=1
