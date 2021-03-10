#include <math.h>
#include <stdio.h>


int main(void){

int a=1,c=1000,b;

for(;a<c;a++){
    c-=a;
    for(b=a;b<c/2;b++){
        c-=b;
        if((int)pow(a,2)+(int)pow(b,2)==(int)pow(c,2)){
            printf("abc:%d ",a*b*c);
            a=1001;
            break;}
            
         c+=b;}
            
    c=1000;}

return 0;}
