#include <stdio.h>
#include <stdlib.h>

int main(void){

int *dizi;
int answer=1, i,j,c,flag,t;

for(i=999;i>99;i--){
   for (j=i;j>99;j--){
       c=i*j;
       flag=1;
        if(c>99999){
           dizi=(int *)malloc(6*sizeof(int));
        for(t=0;t<6;t++){
            dizi[t]=c%10;
            c=c/10;}
         for(t=0;t<6;t++){
             if(dizi[t]!=dizi[5-t]){
                 flag=0;
                 break;}}}






       else{
          free(dizi);
          dizi=(int *)malloc(5*sizeof(int));
          for(t=0;t<5;t++){
              dizi[t]=c%10;
              c=c/10;}
           for(t=0;t<5;t++){
              if(dizi[t]!=dizi[4-t]){
                 flag=0;
                  break;}}}
if(flag==1 && i*j>answer){
   answer=i*j;}

}}


printf("%d",answer);


free(dizi);

return 0;}
