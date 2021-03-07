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
