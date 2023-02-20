#include <iostream>
#include <vector>
using namespace std;

int count_digit(int);
bool check(int,int,int);

int main(void)
{
	vector <int> numbers;
	
	int i=2,j,sum=0;
	bool check2;
	
	while(1)
	{
		j=i+1;	
		
		if(count_digit(i) + count_digit(j) + count_digit(i*j) > 9)
			break;
		
		while(count_digit(i) + count_digit(j) + count_digit(i*j) <= 9)
		{
			check2=1;
		
			if(count_digit(i) + count_digit(j) + count_digit(i*j) == 9 && check(i,j,i*j))
			{
				
				if(numbers.size() == 0)
				{
					numbers.push_back(i*j);
					sum+=(i*j);
				}
					
				else
				{
					for(int k=0;k<numbers.size();k++)
					{
						if(i*j == numbers[k])
						{
							check2=0;
							break;
						}
							
						
					}
					
					if(check2)
					{
							numbers.push_back(i*j);
							sum+=(i*j);

					}
				
				}
			}

			j++;
			
		}
		
		i++;
	}
  
  cout<<sum;
  
    return 0;
}

int count_digit(int number)
{
	int count=0;
	
	while(number)
	{
		number -= (number % 10);
		number/=10;
		count++;
	}
	
	return count;
}

bool check(int number1,int number2, int number3)
{
	int dizi1[10] ={0};
	int dizi2[10] ={0};
	int dizi3[10] ={0};
	
	while(number1)
	{
	
		dizi1[number1 % 10] +=1;
		number1 -= (number1 % 10);
		number1/=10;
	}
	
	while(number2)
	{
	
		dizi2[number2 % 10] +=1;
		number2 -= (number2 % 10);
		number2/=10;
	}
	
	while(number3)
	{

		dizi3[number3 % 10] +=1;
		number3 -= (number3 % 10);
		number3/=10;
	}
	
	if(dizi1[0] + dizi2[0] + dizi3[0] > 0)
		return 0;
	
	for(int i = 1; i<10;i++)
	{

		if(dizi1[i] + dizi2[i] + dizi3[i] > 1 )
			return 0;
	}
	
	return 1;
}
