/*

The sum of the squares of the first ten natural numbers is,
1^2 + 2^2 + ..... 10^2=385
The square of the sum of the first ten natural numbers is,
(1+2+...+10)^2=3025

Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is .
3025-385=2640.
Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

int *dizi;
dizi=(int *)malloc(100*sizeof(int));

int i,first,second;

for(i=0;i<100;i++)
	dizi[i]=i+1;

first=pow((dizi[99]+dizi[0])*50,2);

second=0;

for(i=0;i<100;i++)
	second +=pow(dizi[i],2);

printf("%d",first-second);
free(dizi);

return 0;}
