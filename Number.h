

#pragma once

class Number
{
private:
	unsigned int number;
	unsigned short int size_ptr;

public:
	Number(unsigned int);
	unsigned int* cut_number();   //�rne�in 3797 say�s� i�in;  797, 97, 7, 379, 37, 3 de�erlerini tutan bir pointer d�nderiyor.
	bool truncatable_prime(); // say� asal ve sa�dan soldan par�aland���nda da asal ise bu say� kesilebilir asald�r. �rne�in 3797 say�s� i�in; 3797, 797,97,7,  379,37,3 say�lar� asal ise kesilebilir asald�r.
	
};
