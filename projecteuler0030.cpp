#include <iostream>
#include <math.h>


using namespace std;
int limit(int);
int mod_dive(int *);


int main(void)
{
	int take;
	
	cin>>take;
	
	int little_sum , big_sum = 0, max=limit(take), copy_i;

	for(int i = 10; i<=max;i++)
	{
		little_sum=0;
		copy_i=i;
		
		while(copy_i > 0)
		{
			little_sum += pow(mod_dive(&copy_i) ,take);
			
		}
		
		if(little_sum == i)
			big_sum+=little_sum;
		
		
	}
	
	cout<<big_sum;
	
	
	return 0;
}

int limit(int n)
{
	int i=2;
	
	while( (pow(9,n)*i) >= (pow(10,i)-1) )
	{
		
		
		
		i++;
	}
	
	
	return (int)( pow(9,n)*i) ;
	
}

int mod_dive(int *number)
{
	int a = *number % 10;
	*number-=a;
	*number/=10;
	
	return a;
	
}

