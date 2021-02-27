#include <stdio.h>

int f(int[]);

int main(void){

int numbers[5]={7,4,3,12,2};
printf("%d",f(numbers));
return 0;
}

int f(int n[]){

int max, i;
max= n[0];

for (i=1;i<5;i++)
  if(n[i]>max)
    max = n[i];

return max;

}
  
