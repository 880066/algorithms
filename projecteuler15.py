
"""
Starting in the top left corner of a 2×2 grid, and only being able to move to the right and down, there are exactly 6 routes to the bottom right corner.
How many such routes are there through a 20×20 grid?
"""

def c(n,r):
    cevap=1
    if(n-r >= r ):
        b = n-r
    else:
        b=r
        r=n-r
    for i in range (n,n-b,-1):
        cevap *=i
        cevap /= (i-b)

    return cevap

print(c(40,20))



