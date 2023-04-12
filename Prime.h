#pragma once

#include <vector>

class Prime 
{
private:
	

public:
	static std::vector <unsigned int> primes;		  // k���kten b�y��e  asal say� atlamadan asal say�lar� tutan bir vekt�r.
	static bool check_eneought(const unsigned int); // sayinin asal olup olmad���n� kontrol etmek i�in primes vekt�r�ndeki asal say�lar�n yeterli olup olmad���n� kontrol ediyor. 
	static bool check_prime(unsigned int);   // sayinin asal olup olmad���n� kontrol ediyor.
	static void add_prime(const unsigned int);    // sayi asal ise primes vektor�ne ekliyor. Primes vekt�r� s�ral� ve de�er atlamadan asal say� de�erlerini tuttu�undan eklenen asal say�n�n bir sonraki asal oldu�undan emin olmak gerek.
	static void qualify_prime_vector(const unsigned int); // Verilen say�n�n asal olup olmad���n� kontrol etmek i�in gereken asal say�lar� primes vekt�r�ne ekliyor.

};
