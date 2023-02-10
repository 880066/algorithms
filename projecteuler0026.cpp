#include <iostream>
#include <vector>

using namespace std;

int main(void)
{

	int bolunen,answer,en_buyuk=0,check,check2;

	for(int i = 2; i<1000; i++)
	{
		
		vector <int> numbers = {1};
		bolunen=1;
		check2=1;
		
		while(check2)
		{
			if(bolunen % i == 0)
			{
				break;

			}
			
			else if( bolunen < i)
			{
				
				bolunen*=10;
				
			}
			
			
			if(bolunen > i)
			{
				
				bolunen = bolunen % i;
				check=1;
				
				for(int t=0 ; t<numbers.size() ; t++)
					{
						if(numbers[t] == bolunen)
						{
							check = 0;
							if(numbers.size()-t > en_buyuk)
							{
								en_buyuk = numbers.size()-t;
								answer=i;
							}
							
							check2=0;
							break;
						}
						
					}
					
				if(check)
				{
					numbers.push_back(bolunen);
				}
				
			}
			
		}
		
	}
	
	cout<<answer;

	return 0;
}
