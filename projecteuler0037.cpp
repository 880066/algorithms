#include <iostream>
#include "Number.h"
#include "Prime.h"

using namespace std;

int main(void)
{
	
	unsigned short int count = 0;
	int start = 11;
	int sum = 0;

	while (count - 11)
	{
		Number number(start);
		if (number.truncatable_prime())
		{
			sum += start;
			count++;
		}


		start += 2;
	}

	cout << sum;


	return 0;
}