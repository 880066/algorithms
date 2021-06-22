#include <stdio.h>

/* 

Let d(n) be defined as the sum of proper divisors of n (numbers less than n which divide evenly into n).
If d(a) = b and d(b) = a, where a ? b, then a and b are an amicable pair and each of a and b are called amicable numbers.

For example, the proper divisors of 220 are 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 and 110; therefore d(220) = 284. The proper divisors of 284 are 1, 2, 4, 71 and 142; so d(284) = 220.

Evaluate the sum of all the amicable numbers under 10000.

 */


unsigned int pbs(unsigned int);


int main(void){
	
	unsigned int max = 10000,sayi=4,sayi1,sayi2,sum=0;
	
	for(;sayi<max;sayi++){
		
		sayi1=pbs(sayi);
		sayi2=pbs(sayi1);
		if(sayi == sayi2  && sayi2 <10000 && sayi1 != sayi2)
			sum +=sayi;
		
		
	}
	
	printf("%u",sum);
	
	return 0;
}

unsigned int pbs(unsigned int sayi){
	
	unsigned int i,sum=0;
	
	for ( i= 1 ; i<sayi ; i++)
		if(sayi % i == 0)
			sum +=i;

	return sum;
	
}
