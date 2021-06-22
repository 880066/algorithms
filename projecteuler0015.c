/*
Starting in the top left corner of a 2×2 grid, and only being able to move to the right and down, there are exactly 6 routes to the bottom right corner.


How many such routes are there through a 20×20 grid?
*/

#include <stdio.h>
#include <stdlib.h>
unsigned long long int c (int ,int);

int main(void){
	
	
	printf("%lld",c(40,20));
	
	return 0 ;
}

unsigned long long int c (int n, int r){
	
	unsigned long long int cevap =1;
	
	int b,sayac=1,i,j,flag,kopya;
	int *asallar;
	int *asal_adet;
	unsigned long long int bol =1;
	
	if(n-r >= r)
		b = n-r;
	
	else{
		b=r;
		r=n-r;
	}
	
	asallar = (int *)malloc(sayac*sizeof(int));
	if (asallar == NULL){
		free(asallar);
		return 0;
	}
	
	asallar[0]=2;
	
	for(i=3;i<=n-b;i++){
		flag =1;
		for(j=0;j<sayac;j++){
			if(i % asallar[j] == 0){
				flag = 0;
				break;
			}	
		}
		
		if (flag == 1){
			sayac++;
			asallar=(int *)realloc(asallar,sayac*sizeof(int));
			if (asallar == NULL)
				return 0;
			asallar[sayac-1]=i;
		}
	}
		
	asal_adet=(int * )malloc(sayac*sizeof(int));
	if(asal_adet == NULL)
		return 0;
	for(i=0;i<sayac;i++)
		asal_adet[i] = 0;
	
	for(i=0;i<sayac;i++){
		for(j=2;j<=(n-b);j++){
			kopya = j;
			while (kopya % asallar[i] == 0) {
			
				asal_adet[i]++;
				kopya /=asallar[i];}
		}
	}
	
	
	for(;n > b ; n--){
		cevap *=n;
		for(i=0;i<sayac;i++){
			if(asal_adet[i] != 0 && cevap % asallar[i] == 0 ){
				cevap /= asallar[i];
				asal_adet[i]--;
			}
		}
	}
	
	free(asallar);
	free(asal_adet);
	return cevap;
}
