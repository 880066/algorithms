#include <iostream>
#include <math.h>

using namespace std;

bool isPalindromes(int);
bool isPalindromes_binary(int);


int main(void)
{
	int sum=0;
	
	for(int i =1;i<1000000;i++)
	{
		
		if(isPalindromes(i) && isPalindromes_binary(i) )
		{
			sum+=i;
			
		}
		
		
	}
	
	cout<<sum;
	
	return 0;
}

bool isPalindromes(int number)
{
	
	int n = (int)log10(number) + 1;
	int dizi[n];
	
	for(int i = 0;i<n;i++)
	{
		dizi[i] = number %10;
		number-=dizi[i];
		number/=10;
	}
	
	for(int i =0;i<n;i++)
	{
		if(dizi[i] != dizi[n-i-1])
			return false;
		
	}
	
	return true;
	
}

bool isPalindromes_binary(int number)
{
	
	int n = (int)log2(number)+1;
	int dizi[n];
	
	for(int i = 0;i<n;i++)
	{
		dizi[i] = number%2;
		number/=2;
		
	}
	
	for(int i = 0; i<n;i++)
	{
		if(dizi[i] != dizi[n-i-1])
			return false;
	}
	
	return true;
}



