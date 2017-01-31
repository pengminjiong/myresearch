import math
import random

sum=0
num=0
AA=0
for i in range(1,100000):
    s=random.expovariate(1.4)
    sum=s+sum
    num=num+1

AA=num/sum
print(AA)
   
print "End"
