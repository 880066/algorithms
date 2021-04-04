/*  
The following iterative sequence is defined for the set of positive integers:

n › n/2 (n is even)
n › 3n + 1 (n is odd)

Using the rule above and starting with 13, we generate the following sequence:

13 › 40 › 20 › 10 › 5 › 16 › 8 › 4 › 2 › 1
It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

Which starting number, under one million, produces the longest chain?

NOTE: Once the chain starts the terms are allowed to go above one million.

*/


#include <stdio.h>

int f(unsigned long long int);

int main(void){
	
	int sinir=1000000,cevap=0,sayac=0,i,ff;
	
	for(i=500000;i<sinir;i++){
		
		if(    ((i*2)-1)/3 % 2 == 1  ){
			continue;
		}
		
		ff=f(i);
		
		if (ff > sayac){
			sayac=ff;
			cevap=i;
		}
		
		
	}
	
	printf("%d",cevap);
	
	return 0;
}

int f(unsigned long long int x){
	
	int counter =1;
	while(x != 1){
		x = (x % 2 == 0) ? x /2 : x*3 +1;
		counter++;
	}
	
	return counter;
}
