#include <iostream>

using namespace std;

int main(void)
{
	unsigned int sum=0;
	
	for(int i = 1001 ; i>1 ; i-=2)
	{
		sum = sum + ( 5*i*i - 10*(i-1)) ;
		sum =sum - (i-2)*(i-2);
	}
	
	cout<<sum+1;
	
}
