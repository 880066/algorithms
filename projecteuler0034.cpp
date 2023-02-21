#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int last_digit(int);

int main(void)
{
	int sum=0;
	
	for(int i = 10;i<=2540160;i++)
	{
		
		if(last_digit(i) == i)
			sum+=i;
		
	}

	cout<<sum;
  
    return 0;
}

int last_digit(int number)
{
	int last,fac,sum=0;
	
	while(number)
	{
		fac=1;
		
		last=number %10;
		number-=(number%10);
		number/=10;
		
		for(;last>1;last--)
		{
			fac*=last;
			
		}
		sum+=fac;
	}
	return sum;
}

