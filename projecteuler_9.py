a=1
c=1000

while(a<c):
	c-=a
	b=a
	while(b<c/2):
		c-=b
		if(a**2 + b**2 == c**2):
			print(a*b*c)
			a=1001
			break
		c+=b
		b+=1
	
	c=1000
	a+=1
