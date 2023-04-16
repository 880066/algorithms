#include "Pandigital.h"
#include <iostream>

using namespace std;

int main(void)
{
	Pandigital pandigital1;
	unsigned int most_big=0;

	for (int i = 1; i < 9999; i++)
	{
		pandigital1.set_number(i);
		if (pandigital1.check_pandigital_multiples() && pandigital1.call_pandigital() > most_big)
			most_big = pandigital1.call_pandigital();
	}

	cout << most_big;

	return 0;
}