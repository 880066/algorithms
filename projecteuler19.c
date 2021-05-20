/*

You are given the following information, but you may prefer to do some research for yourself.

1 Jan 1900 was a Monday.
Thirty days has September,
April, June and November.
All the rest have thirty-one,
Saving February alone,
Which has twenty-eight, rain or shine.
And on leap years, twenty-nine.
A leap year occurs on any year evenly divisible by 4, but not on a century unless it is divisible by 400.
How many Sundays fell on the first of the month during the twentieth century (1 Jan 1901 to 31 Dec 2000)?

*/


#include <stdio.h>

int f(int,int,int, int , int,int);


int main(void){

int ilk_yil=1901 , ilk_ay= 1 , ilk_gun=1, son_yil=2000, son_ay=12, son_gun=31,i,j;

int gecen_gun = f(ilk_yil,ilk_ay,ilk_gun,son_yil,son_ay,son_gun);


printf("Gecen gun:%d\n",gecen_gun);

return 0;}

int f( int ilk_yil , int ilk_ay , int ilk_gun, int son_yil , int son_ay, int son_gun){

int gecen_gun=0,yil,ay,gun,cekim , cevap = 0;

for (yil=ilk_yil ; yil<= son_yil; yil++){
	
	if ( yil == ilk_yil)
		ay = ilk_ay;
		
	else
		ay=1;
	
    for( ; ay<=12 ; ay++){
    	
    	switch(ay){
    		
    		case 1 : case 3: case 5: case 7 : case 8: case 10 : case 12:
    			cekim = 31;
    			break;
    			
    		case 2 :
    			if( yil % 400 == 0)
    			cekim=29;
    			
    			else if (yil % 100 == 0)
    				cekim=28;
    				
    			else if ( yil % 4 == 0)
    				cekim=29;
    				
    			else
    				cekim=28;
    			
    			break;
    			
    		default :
    			cekim = 30;
    		
    		
		} // switch sonu
    	
    	if (yil == ilk_yil && ay==ilk_ay)
    		gun=ilk_gun;
    		
    	else
    		gun=1;
    	
    	for ( ; gun <=cekim ; gun++){
		gecen_gun++;
		
		if( (gecen_gun + 1) % 7 == 0  && gun == 1 )
			cevap++;
			
		
		if(yil == son_yil && ay == son_ay && gun+1 == son_gun){
		ay = 13 ; 
		break;
		}
			
		
	} // gun sonu
    	
	}// ay sonu
	

}//yil sonu


return cevap ;
}
