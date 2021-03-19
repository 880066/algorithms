#include <stdio.h>

int main(void){
  
 int sayi =1 , i=2,sayac ,bolen_sayisi,j,sayi_kopya;
  
  while(1){

    if(bolen_sayisi > 500)
      break;
    bolen_sayisi=1;
    sayac=0;
    j=2;
    sayi += i;
    sayi_kopya=sayi;

    while(sayi_kopya > 1){
      if(sayi_kopya % j == 0){
        sayi_kopya /= j;
        sayac++;
      }

      if (sayi_kopya % j !=0){
        j++;
        bolen_sayisi *= (sayac + 1);
        sayac = 0;
      }
      
    }

    i++;
    
  }

  printf("%d",sayi);
  
  return 0;
}
