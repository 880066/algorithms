#pragma once

#include <vector>

class Prime 
{
private:
	

public:
	static std::vector <unsigned int> primes;		  // küçükten büyüðe  asal sayý atlamadan asal sayýlarý tutan bir vektör.
	static bool check_eneought(const unsigned int); // sayinin asal olup olmadýðýný kontrol etmek için primes vektöründeki asal sayýlarýn yeterli olup olmadýðýný kontrol ediyor. 
	static bool check_prime(unsigned int);   // sayinin asal olup olmadýðýný kontrol ediyor.
	static void add_prime(const unsigned int);    // sayi asal ise primes vektorüne ekliyor. Primes vektörü sýralý ve deðer atlamadan asal sayý deðerlerini tuttuðundan eklenen asal sayýnýn bir sonraki asal olduðundan emin olmak gerek.
	static void qualify_prime_vector(const unsigned int); // Verilen sayýnýn asal olup olmadýðýný kontrol etmek için gereken asal sayýlarý primes vektörüne ekliyor.

};
