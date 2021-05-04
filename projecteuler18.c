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
void f(int [] , int );
int g ( int ** , int );

int main(void){
	
	int satir=satir_sayisi() , i,j , sayac = 0 , eleman_sayisi = (satir + 1 ) * satir / 2 ;
	int dizi[eleman_sayisi ];
	f(dizi, eleman_sayisi);
	
	int **ptr;
	ptr = (int **) malloc(satir * sizeof(int));
	
	for ( i = 0 ; i < satir ; i++){
		ptr[i] = (int *) malloc( (i+1)*sizeof(int));
		
		for ( j = 0 ; j<=i ; j ++){
			
			ptr[i][j]=dizi[sayac];
			sayac++;
			
		}
	}
	
	int cevap = g(ptr,satir);
	printf("Cevap/Answer: %d",cevap);
	
	
	for ( i= 0 ; i < satir ; i++ )
		free(ptr[i]);	
	
	free(ptr);
	
	return 0;
}

int satir_sayisi ( void){

	int satir  = 0 , sayac = 0 , sayi; 
	
	FILE *infile;
	
	infile = fopen("18.txt","r");
	
	while ( !feof(infile) ){
		
		fscanf(infile,"%d",&sayi);
		sayac++;
		if ( sayac  > satir){
			satir = sayac ;
			sayac = 0 ; 
		}
		
	}
	
	fclose(infile);

	
	return satir;
}

void f( int a[] , int eleman_sayisi){
	int i, j , sayi;
	FILE *infile;
	
	infile = fopen("18.txt","r");
	
	for ( i=0 ; eleman_sayisi > i  ; i++ ){
		
		fscanf(infile,"%d",&sayi);
		a[i]=sayi;
		
	}
	
	fclose(infile);
	
}

int g(int **p , int satir){
	
	int i ,j ;
	
	for ( i = satir-1 ; i > 0 ; i-- ){
		
		for ( j = i ; j > 0 ; j--){
			
			if ( p[i][j] > p[i][j-1] )
				p[i-1][j-1] = p[i-1][j-1] + p[i][j];
			
			else
			p[i-1][j-1] = p[i-1][j-1] + p[i][j-1];
			
		}
		
	}
	
	
	return p[0][0];
	
}
