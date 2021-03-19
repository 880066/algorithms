/*
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.

*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main(void){


  
int *a;
a=(int *)malloc(2*sizeof(int));
if(a!=NULL){
    a[0]=2;
    a[1]=3;}
    
int count=2,flag,j;
long long int sum=5,i;
for(i=5;i<2000000;i+=2){
    flag=1;
    for(j=0;pow(a[j],2)<=i;j++){
        if(i % a[j]==0){
        flag=0;
        break;
        }}
        
    if(flag==1){
        count++;
        a=realloc(a,sizeof(int)*count);
        if(a != NULL){
            a[count-1]=i;}
        sum+=i;
    }}


printf("%lld",sum);


free(a);


return 0;}
