from string import ascii_uppercase

def score(name):
    result = list(ascii_uppercase)
    return sum(result.index(i) + 1 for i in name.strip('"'))

with open('euler_22.txt') as f:
  names = f.read().split(',')
  names.sort()
 print (sum( i* score(j) for i, j in enumerate(names,1)))
