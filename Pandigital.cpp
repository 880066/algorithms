#include "Pandigital.h"
#include <math.h>

void Pandigital::set_number(unsigned int number)
{
	this->number = number;
}

bool Pandigital::check_pandigital_multiples()
{
	unsigned int part_pandigital, total_pandigital = 0;
	unsigned short int number_digit = 9, log_part_pandigital;

	for (int i = 1; i < 10 ; i++)
	{
		part_pandigital = number * i;
		log_part_pandigital = (unsigned short int)log10(part_pandigital);
		number_digit -= (log_part_pandigital + 1);
		total_pandigital += (part_pandigital * pow(10, number_digit ));
		

		

		if (number_digit == 0 && i != 1)
		{
			pandigital_number = total_pandigital;
			int dizi[9] = { 0 };
			unsigned int copy_total_pandigital = pandigital_number;
			unsigned short int last_digit;

			for (int j = 0; j < 9; j++)
			{
				last_digit = copy_total_pandigital % 10;

				if (!last_digit)
					return 0;

				dizi[last_digit - 1] += 1;
				copy_total_pandigital -= last_digit;
				copy_total_pandigital /= 10;
			}

			for (int j = 0; j < 9; j++)
			{
				if (dizi[j] != 1)
					return 0;
			}

			return 1;
		}
	}

	return 0;
}

unsigned int Pandigital::call_pandigital(void)
{
	return pandigital_number;
}