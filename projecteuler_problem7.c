/*

By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?

*/


#include <stdio.h>
#include <math.h>

int main(void){

int dizi[10001]={2,3};

int num=2,i=5,j,flag;

while(dizi[10000] <= 0){
	flag=1;
	for(j=0;pow(dizi[j],2) <= i ; j++){
		if(i % dizi[j] == 0){
			flag =1;
			break;}}
	if(flag==1){
		dizi[num]=i;
		num++;}
	i+=2;

}


printf("%d",dizi[10000]);

return 0;}
