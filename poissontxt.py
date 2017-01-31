import math
import random

j=0
for i in range(1,6):
 j=i
 name='A'+str(j)+'+0.2.txt'
 print name
 sum=0
 num=0
 while sum<60:
    s=random.expovariate(0.2)
    sum=s+sum
    num=num+1
    if(sum<60):
     #f = open('D'+%i'+0.2.txt', 'a')
     f=open(name,'a')
     f.write("Acar%s.Start(Seconds(%f));\n" % (num, sum))
     f.close()
