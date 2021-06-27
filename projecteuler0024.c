#include <stdio.h>


/*

A permutation is an ordered arrangement of objects. For example, 3124 is one possible permutation of the digits 1, 2, 3 and 4. If all of the permutations are listed numerically or alphabetically, we call it lexicographic order. The lexicographic permutations of 0, 1 and 2 are:

012   021   102   120   201   210

What is the millionth lexicographic permutation of the digits 0, 1, 2, 3, 4, 5, 6, 7, 8 and 9?


*/


unsigned int fac(unsigned int );
unsigned int bol(unsigned int , unsigned int);
unsigned int carp(unsigned int,unsigned int *);

int main(void){
	
	
	
unsigned int eleman_sayisi = 10 ,  rakamlar[10]={0,1,2,3,4,5,6,7,8,9} , th=1000000-1 , index , cevap [10], i = 0,j,s=10;
	

	
		while(s){
		
		index = carp(eleman_sayisi,&th)  ;
		cevap[i] = rakamlar[index];
		i++;
		eleman_sayisi--;
		s--;
		for(j=index+1;j<10;j++)
			rakamlar[j-1] = rakamlar[j];
			
		
	}
		
	for(i=0;i<10;i++)
		printf("%d",cevap[i]);
	
	
	
	return 0;
}

unsigned int fac(unsigned int sayi){
	
	unsigned int cevap = 1 , i;
	
	for(i=2;i<=sayi;i++)
		cevap *= i;
	
	
	return cevap ;
	
}

unsigned int bol ( unsigned int eleman_sayisi , unsigned int th){
	
	unsigned int i = eleman_sayisi;
	
	while(i){
		
		if(fac(i) <= th)
			break;
		
		
		i--;
	}
	
	
	return i;
	
}

unsigned int carp(unsigned int eleman_sayisi, unsigned int *th){
	
	unsigned int bol_function = bol(eleman_sayisi, *th) , i = 0; 
	
	while(1){
		
		if(fac(bol_function) * (i+1) <= *th)
			i++;
		else
			break;
		
	}
	
	*th -=  (i * fac(bol_function) );
	
	return i;
	
}
