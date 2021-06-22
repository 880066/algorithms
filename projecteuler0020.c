/*

n! means n × (n - 1) × ... × 3 × 2 × 1

For example, 10! = 10 × 9 × ... × 3 × 2 × 1 = 3628800,
and the sum of the digits in the number 10! is 3 + 6 + 2 + 8 + 8 + 0 + 0 = 27.

Find the sum of the digits in the number 100!

*/


#include <stdio.h>


int eleman_sayisi(char []);
void b_to_a(char [], char[]);
void a_to_b(char [], char[],int);
int sum(char file_name[]);

int main(void){
	
	char file_name1 []="a.txt" , file_name2[]="b.txt";
	FILE *a,*b;
	int sayi = 2, max=100;
	b=fopen(file_name2,"w");
	fprintf(b,"1");
	fclose(b);
	
	
	for(;sayi<=max;sayi++){
	
	b_to_a(file_name1,file_name2);
	a_to_b(file_name1,file_name2,sayi);  
	
}

	printf("%d",sum(file_name2));
	
	
	return 0;
}

int eleman_sayisi (char file_name[]){
	
	int cevap = -1;
	char ch;
	FILE *b;
	
	b=fopen(file_name,"r");
	while(!feof(b)){
		fscanf(b,"%c",&ch);
		cevap++;
	}
	
	fclose(b);
	
	return cevap;
}

void b_to_a(char file_name1[],char file_name2[]){
	
	FILE *a,*b;
	int sayac =eleman_sayisi(file_name2);
	char ch;
	
	a=fopen(file_name1,"w");
	fclose(a);                 // a dosyasının içi boşaltıldı
	
	a=fopen(file_name1,"a");   
	b=fopen(file_name2,"r");
	
	while(sayac){
		
		fscanf(b,"%c",&ch);
		fprintf(a,"%c",ch);
		
		sayac--;
	}
	
	fclose(a);
	fclose(b);
}

void a_to_b(char file_name1[],char file_name2[],int sayi){
	
	FILE *a,*b;
	int sayac = eleman_sayisi(file_name1),elde=0,carpim,birler;
	char ch ;
	
	b=fopen(file_name2,"w");  // b dosyasının içi boşaltıldı.
	fclose(b);
	
	a=fopen(file_name1,"r");
	b=fopen(file_name2,"a");
	
	while(sayac){
		fscanf(a,"%c",&ch);
		
		if(sayac  > 1){
			
			carpim = (sayi * (ch-'0')) + elde; // ex.128
			birler =carpim % 10;   //ex.8
			elde = (carpim-birler)/10; // ex.12
			fprintf(b,"%d",birler);

		}
		
		else if (sayac  == 1){
			
			carpim = (sayi * (ch-'0')) + elde;
			
			while(carpim){
				
				birler = carpim % 10;
				fprintf(b,"%d",birler);
				carpim -= birler;
				carpim /=10;
				
			}
			
		}
		
		sayac--;
	}
	
	fclose(a);
	fclose(b);
}

int sum(char file_name[]){
	
	char ch;
	int sum = 0,i=eleman_sayisi(file_name);
	FILE *b;
	b=fopen(file_name,"r");
	
	while(i){
		
		fscanf(b,"%c",&ch);
		sum += (ch-'0');
		i--;
	}
	fclose(b);
	
	return sum;
}
