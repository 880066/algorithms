#include <stdio.h>
#include <math.h>

int main(void){

int sayi=1,bolen_sayisi=0 , i , j;

for(i=1;bolen_sayisi<=500;i++){
	sayi+=i+1;
	bolen_sayisi=0;
	for(j=1;j<=(int)pow(sayi,0.5);j++){
		if(sayi % j == 0)
			bolen_sayisi++;}

    bolen_sayisi*=2;
}

printf("%d",sayi);

return 0;}
