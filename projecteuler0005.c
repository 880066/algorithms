/*

2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int log_int(int , int);

int main(void){

int *p;

int count=0,answer=1,t=0,i,j,flag;

for(i=3;i<21;i++){
   flag=1;
   for(j=2;j<i;j++){
       if(i%j==0){ 
           flag=0;
           break;}}

     if(flag==1){
        count++;}
}

p=(int *)malloc(count*sizeof(int));

*(p+0)=2;
for(i=3;i<21;i++){
   flag=1;
   for(j=2;j<i;j++){
       if(i%j==0){
           flag=0;
           break;}}
     if(flag==1){
        t++;
        p[t]=i; }}


for(i=0;i<count+1;i++){

answer*=pow(p[i],log_int(p[i],20));

}

printf("%d",answer);
return 0; }

int log_int(int x, int y){

int i=1,sayac=0;

while(i*x<=y){
i*=x;
sayac++;
}

return sayac;
}
