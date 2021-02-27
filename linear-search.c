#include <stdio.h>

int f(int [],int);

int main (void){

  int numbers[]={1,3,7,12,4,6,2,5,8,11,9,10};
  
  if(f(numbers,6)<0)
     printf("Not Found!");
  
  else
  printf("position in %d",f(numbers,6));
  
  
return 0;
}

int f(int n[],int search){
int i=0;
  
  for(;i<12;i++)
    if(n[i]== search)
       return i+1;
  

return -1;
}
