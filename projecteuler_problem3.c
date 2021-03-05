/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/


#include <stdio.h>

int main() {

  long a = 600851475143;
  int i,answer;

  for(i=2;i<=a;i++){
    if(a % i == 0){
      a=a/i;
      answer=i;
      i--;
      }
  if(i>a) break;}
  
    printf("%d",answer);
  
  
  return 0;
}
  
