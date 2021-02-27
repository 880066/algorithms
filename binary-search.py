import random

a=[];
answer=random.randrange(1,101)
for i in range (1,101):
  a.append(i)
  
while(True):
  s=input("Try:")
  if int(s) <= 0:
    break
  
  elif int(s) == answer:
    print("Congratulations")
    break
    
  elif int(s) <answer:
    print("UP")
    
  elif int(s) > answer:
    print("DOWN")
    
    
    
