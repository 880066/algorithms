/*
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.

*/

#include <math.h>
#include <stdio.h>


int main(void){

int a=1,c=1000,b;

for(;a<c;a++){
    c-=a;
    for(b=a;b<c/2;b++){
        c-=b;
        if((int)pow(a,2)+(int)pow(b,2)==(int)pow(c,2)){
            printf("abc:%d ",a*b*c);
            a=1001;
            break;}
            
         c+=b;}
            
    c=1000;}

return 0;}
