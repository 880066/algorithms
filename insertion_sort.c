#include <stdio.h>

int main(void){

int *a[7]={33,44,21,83,56,73,22};
  
int i , j , swap;
  
  for(i=0;i<7;i++){
    for(j=0;j<=i;j++){
      if(a[j] <= a[i]){
      swap = a[j];
      a[j]=a[i];
      a[i]=swap;
      }
    }
  }
  
  
  for (i=0;i<7;i++)
    printf("%d \t",a[i]);
  

return 0 ;}
