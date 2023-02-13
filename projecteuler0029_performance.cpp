#include <iostream>
#include <math.h>

using namespace std;


int main(void)
{

	int a = 100, b=100, count=0,total;
	total = ((a-2)+1) * ((b-2)+1);
	
	
	for(int i = 2; i<= sqrt(a) ; i++)
	{
		
		for(int j = 3; pow(i,j) <= a ;j++)
		{
			if(pow(i,j)<=a)
			{
				count+=((((b-(b % j))/j)-2)+1);
			}
				
		}
			
	}
	
	count+=((sqrt(a)-1)*((((b-(b % 2))/2)-2)+1));
	
	
	cout<<total+1-count;
	
	return 0;
}
