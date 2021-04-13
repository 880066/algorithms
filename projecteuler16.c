/*
2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.

What is the sum of the digits of the number 2^1000?

*/

#include <stdio.h>
#include <stdlib.h>
unsigned long long int f(unsigned long long int,unsigned long long int);

int main(void){
	
	
	printf("%d",f(2,1000));
	return 0;
}

unsigned long long int f(unsigned long long int a, unsigned long long int b){
	
	
	char *sayi;
	unsigned long long int i,j,eleman_sayisi=1,cevap=0;
	short int carp,onda=0;
	int ekle;
	
	sayi = (char *)malloc(eleman_sayisi*sizeof(char));
	if (sayi == NULL)
		return 0;
		
	sayi[0]='1';
	
	
	for(i=0;i<b;i++){
		
		if((sayi[0]-'0')>4){
			eleman_sayisi++;
			sayi= (char *)realloc(sayi,eleman_sayisi*sizeof(char));
			if(sayi == NULL)
				return 0;
				
			for(j=0;j<eleman_sayisi-1;j++)
				sayi[eleman_sayisi-1-j] = sayi[eleman_sayisi-2-j];
			
			sayi[0]='0';
		}
		
		
		for(j=0;j<eleman_sayisi;j++){
			
			carp= ((sayi[eleman_sayisi-1-j]-'0') * a ) + onda; 
			onda=carp / 10;
			sayi[eleman_sayisi-1-j]=(carp % 10 ) + '0';
		}
	

	}
	
	for (i=0;i<eleman_sayisi;i++)
		cevap += (sayi[i]-'0');
		

	free(sayi);
	
	return cevap;
}
