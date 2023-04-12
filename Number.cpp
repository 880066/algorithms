
#include "Number.h"
#include "Prime.h"
#include <math.h>
#include <vector>

Number::Number(unsigned int number)
{
	this->number = number;
	unsigned short int size_ptr;
}

unsigned int* Number::cut_number(void)
{
	unsigned int number_copy = number;
	unsigned short int n = (unsigned short int)(log10(number) + 1);
	size_ptr = (n - 1) * 2;
	unsigned int* ptr = new unsigned int[size_ptr];
	unsigned short int digit;
	std::vector<unsigned int> digits;

	while (number_copy)
	{
		digit = number_copy % 10;
		number_copy -= digit;
		number_copy /= 10;
		digits.push_back(digit);
	}

	ptr[0] = digits[0];

	for (int i = 1; i < n - 1; i++)
	{
		ptr[i]= (unsigned int)(ptr[i - 1] + ( digits[i] * pow(10, i)));
	}

	ptr[n - 1] = digits[n - 1];
	unsigned short int t = 2;

	for (int i = n; i < size_ptr; i++)
	{
		ptr[i] =(ptr[i - 1] * 10) + digits[n - t];
		t++;
	}

	return ptr;
}

bool Number::truncatable_prime(void)
{
	Prime::qualify_prime_vector(number);
	unsigned int* pt = new unsigned int[size_ptr];
	pt = cut_number();

	if (Prime::check_prime(number))
	{

		for (int i = 0; i < size_ptr; i++)
		{
			if (Prime::check_prime(pt[i]) == 0 )
			{
				return 0;
			}
		}

	}
	else
		return 0;

	return 1;
}

