#include <stdio.h>

int f(int);

int main(void){
    
    int sayac=0,cevap=0,t,i,sinir;
    sinir=1000000;
    for (i=sinir/2;i<sinir;i++){
        t=f(i);
        if(t > sayac){
            sayac=t;
            cevap=i;
        }
        
    }
    
    printf("%d",cevap);
    return 0;
}

int f (int x){
    
    int counter =1;
    while(x != 1 ){
        
        counter++;
        x=(x%2==0) ? x/2 : x*3 +1;
    }
    
    return counter ;
} 
