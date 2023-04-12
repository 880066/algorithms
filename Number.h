

#pragma once

class Number
{
private:
	unsigned int number;
	unsigned short int size_ptr;

public:
	Number(unsigned int);
	unsigned int* cut_number();   //Örneğin 3797 sayısı için;  797, 97, 7, 379, 37, 3 değerlerini tutan bir pointer dönderiyor.
	bool truncatable_prime(); // sayı asal ve sağdan soldan parçalandığında da asal ise bu sayı kesilebilir asaldır. Örneğin 3797 sayısı için; 3797, 797,97,7,  379,37,3 sayıları asal ise kesilebilir asaldır.
	
};
