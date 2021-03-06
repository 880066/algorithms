/*
By starting at the top of the triangle below and moving to adjacent numbers on the row below, the maximum total from top to bottom is 23.

3
7 4
2 4 6
8 5 9 3

That is, 3 + 7 + 4 + 9 = 23.

Find the maximum total from top to bottom of the triangle below: (18.txt)

75
95 64
17 47 82
18 35 87 10
20 04 82 47 65
19 01 23 75 03 34
88 02 77 73 07 63 67
99 65 04 28 06 16 70 92
41 41 26 56 83 40 80 70 33
41 48 72 33 47 32 37 16 94 29
53 71 44 65 25 43 91 52 97 51 14
70 11 33 28 77 73 17 78 39 68 17 57
91 71 52 38 17 14 91 43 58 50 27 29 48
63 66 04 68 89 53 67 30 73 16 69 87 40 31
04 62 98 27 23 09 70 98 73 93 38 53 60 04 23

NOTE: As there are only 16384 routes, it is possible to solve this problem by trying every route. However, Problem 67, is the same challenge with a triangle containing one-hundred rows; it cannot be solved by brute force, and requires a clever method! ;o)

*/


#include <stdio.h>
#include <stdlib.h>

int satir_sayisi(void);
void diziye_atama(int []);
int topla(int [] , int );


int main(void){
	
	int satir = satir_sayisi(), eleman_sayisi = (float)satir / 2 * (satir+1) , dizi[eleman_sayisi] , cevap;

	diziye_atama(dizi);
	cevap = topla(dizi,satir);
	
	printf("Cevap : %d\n",cevap);
	
	
	return 0;
}


int satir_sayisi(void){
	
	int sayi , sayac = 0 , satir = 0;
	
	FILE *infile;
	infile = fopen("18.txt","r");
	
	while( !feof(infile)){
		fscanf(infile,"%d",&sayi);
		sayac++;
		if(sayac > satir){
			satir = sayac ;
			sayac = 0;
		}
	}
	
	fclose(infile);
	
	return satir;
	
}

void diziye_atama(int a[]){
	
	int sayi , sayac =0 ;
	
	FILE *infile;
	
	infile = fopen("18.txt","r");
	
	while ( !feof(infile) ){
		fscanf(infile,"%d",&sayi);
		a[sayac]=sayi;
		sayac++;
	}
	
}

int topla( int a[] , int satir_sayisi){
	
	int sayac = 0 , ptr[15][15] ,i,j;
	

	
	for (i=0 ; i<satir_sayisi ; i++){
		
		for(j=0 ; j<= i ; j++){
			ptr[i][j]=a[sayac];
			sayac++;
		}
	}
	
	
	for(i=0 ; i<satir_sayisi;i++){
		for(j=0 ; j<=i ; j++){
			printf("%d ",ptr[i][j]);
		}
		printf("\n");
	}
	
	for(i=satir_sayisi -1 ; i>0; i--){
		for(j=i ; j>0 ; j--){
			if(ptr[i][j] > ptr[i][j-1])
				ptr[i-1][j-1] += ptr[i][j];
				
			else
				ptr[i-1][j-1] += ptr[i][j-1];
		}
	}
	

	return ptr[0][0];
	
}



