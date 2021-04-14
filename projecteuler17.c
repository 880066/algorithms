/*

If the numbers 1 to 5 are written out in words: one, two, three, four, five, then there are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.

If all the numbers from 1 to 1000 (one thousand) inclusive were written out in words, how many letters would be used?


NOTE: Do not count spaces or hyphens. For example, 342 (three hundred and forty-two) contains 23 letters and 115 (one hundred and fifteen) contains 20 letters. The use of "and" when writing out numbers is in compliance with British usage.

*/

#include <stdio.h>

void f(int *);

int main(void){
	
	int hane_sayisi;
	f(&hane_sayisi);
	printf("Hane sayisi : %d",hane_sayisi);
	
	return 0;
}

void f(int *cevap){
	*cevap=0;
	
	
	int i,mod_on,mod_yuz,bolu_yuz;
	
	for(i=1;i<1000;i++){//for baslangici
	
		mod_on = i %10;
		mod_yuz = i%100;
		bolu_yuz = i /100;
		
		if ( mod_yuz > 12 && mod_yuz <20) // teen
			*cevap += 4;
			
		if ( mod_yuz > 19 && mod_yuz <100 ) // ty
			*cevap +=2;
			

		if (i>99) {//hundred
			*cevap +=7;
			if (mod_yuz != 0) // and
				*cevap += 3;
				
			if(bolu_yuz == 1 || bolu_yuz ==2 || bolu_yuz ==6 ) //one , two , six
				*cevap += 3;
				
			else if (bolu_yuz ==4 || bolu_yuz == 5 || bolu_yuz == 9) //four , five , nine
				*cevap += 4;
				
			else
				* cevap += 5;
			}
			
		if(mod_yuz == 10) //ten
			*cevap +=3;
			
		if(mod_yuz == 11) //eleven
			*cevap +=6;
			
		else if (mod_on ==1) // one
			*cevap += 3;
			
		if (mod_yuz == 12 )//twelve
			*cevap +=6;
			
		else if (mod_on == 2) //two
			*cevap +=3;
			
		if(mod_yuz == 13)//thir
			*cevap += 4;
			
		else if(mod_on == 3) //three
			*cevap += 5;
			
		if(mod_yuz ==15)//fif
			*cevap += 3;
			
		else if(mod_on == 5) // five
			*cevap += 4;
			
		if(mod_yuz ==18 ) //eigh
			*cevap += 4;
			
		else if ( mod_on == 8) //eight
			*cevap +=5;
			
		if(mod_on == 4 || mod_on == 9) // four , nine
			*cevap += 4;
			
		if (mod_on == 6) // six
			*cevap += 3;
		
		if (mod_on == 7) //seven
			*cevap +=5;
		
		if (mod_yuz / 10 > 1 ){
			
			if (mod_yuz / 10 == 2 ||mod_yuz / 10 == 3 ||mod_yuz / 10 ==8 || mod_yuz / 10 == 9) // twen,thir,eigh,nine
				* cevap += 4;
				
			else if (mod_yuz / 10 == 6 || mod_yuz / 10 == 5 || mod_yuz /10 ==4 ) // six, fif,for
				*cevap += 3;
				
			else 
			*cevap += 5;
		}
			
	} //for döngüsü bitişi
	
	*cevap +=11;
	//one thousand
	} //fonksiyon sonu
	
