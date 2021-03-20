"""
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
a^2 + b^2 = c^2
For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.
There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
"""


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
