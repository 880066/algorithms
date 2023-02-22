#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

bool isPrime(int,vector <int> &);
void move(int[],int,int);


int main(void)
{
	int count=0;
	
	vector <int> primes ={2};
	
	for(int i =3;i<1000000;i+=2)
	{
		if(isPrime(i,primes))
				primes.push_back(i);
	
		
	}
	
	bool check ;
	int n;
	
	
	for(int i=0;i<primes.size();i++)
	{
		if(primes[i] < 10)
			count++;
			
		else
		{
			n=(int)log10(primes[i]);
			int dizi[n]={0};
			move(dizi,primes[i],n);
			
			for(int j=0;j<n;j++)
			{
				check=true;
				
				if(!isPrime(dizi[j],primes))
				{
					check=false;
					break;
				}
				
			}
			
			if(check)
				count++;
			
		}
		
	}

	cout<<count;

	return 0;
}

bool isPrime(int number, vector <int> &primes)
{
	
	int numberCopy = (int)sqrt(number), i = 0;
	
	while(primes[i] <=numberCopy)
	{
		if(number % primes[i] == 0)
			return false;

		i++;
		
	}
		
	return true;	
	
}

void move(int dizi[], int number, int n)
{
	int numberCopy;
	
	for(int i = 0; i<n;i++)
	{
		numberCopy=number;
		for(int j=0;j<n+1;j++)
		{
			
			int t= ((j+1)% (n+1));
			int c = numberCopy%10;
			dizi[i] += ( pow(10,t) * c );
			numberCopy-=numberCopy%10;
			numberCopy/=10;
		}
		number = dizi[i];
	}
	
	
}


