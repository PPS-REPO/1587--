import sys


from random import randint as rnd
from random import sample

n=rnd(1,300000)
m=rnd(1,n)
print(n,m)
l=sample(range(1,10**9+1),n)
print(*l)