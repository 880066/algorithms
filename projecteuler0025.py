
a=1 
b=1
t=2
    
while( len(str(a+b)) !=1000 ):
   t+=1 
   c=a+b
   a=b 
   b=c
   
print(t+1)
