import math
import random

sum=0
num=0
while sum<60:
    s=random.expovariate(0.63)
    sum=s+sum
    print(s)
    print('total time %f'%sum)
    num=num+1
    print('total  number %d'%num)
print "End"
