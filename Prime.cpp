#include "Prime.h"
#include <math.h>


std::vector <unsigned int > Prime::primes = {2};



bool Prime::check_eneought(const unsigned int number)
{
	if (primes[primes.size() - 1] * primes[primes.size() - 1] < number)
		return 0;

	return 1;

}

bool Prime::check_prime( unsigned int number)
{
	if (number < 2)
		return 0;

	for (int i = 0; i < primes.size(); i++)
	{
		if (primes[i] * primes[i] > number)
			break;

		else if (number % primes[i] == 0)
			return 0;


	}

	return 1;

}

void Prime::add_prime(const unsigned int number)
{
	if (check_prime(number))       // primes vektörüne her zaman sýralý bir þekilde asallar eklenmeli.
		primes.push_back(number);
	
		
}

void Prime::qualify_prime_vector(const unsigned int number)
{

	if (!check_eneought(number))
	{
		unsigned int max = (unsigned int)sqrt(number);

		if (primes.size() == 1)
		{
			for (int i = 3; i <= max; i += 2)
				add_prime(i);
			
		}

		else
		{
			for (int i = primes[primes.size() - 1] + 2; i <= max; i += 2)
				add_prime(i);
			
		}

	}

}

