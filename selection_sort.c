#include <stdio.h>

int main(void){

  int *a[8]={5,7,2,9,6,1,3,7};
 
  int i,j;
 int swap;
 
for(j=0;j<8;j++) 
  for (i=j;i<8;i++)
    if(a[i] <= a[j]){
      swap=a[i];
      a[i]= a[j];
      a[j]=swap;
    }
  
  for (i=0;i<8;i++)
  printf("%d \t",a[i]);

  return 0;
}
