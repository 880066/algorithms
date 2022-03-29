#include <iostream>

typedef struct _Baslangic {
	
	int *first;
	int *second;
	int *third;
		
}Baslangic;


class Fibo{
	
	public:
	
	Baslangic *baslangic;
	
	
	Fibo()
	{
		baslangic = new Baslangic;
		baslangic->first = new int;
		baslangic->second = new int;
		baslangic->third = new int;
		*baslangic->first=1;
		*baslangic->second=2;
		*baslangic->third= *baslangic->first + *baslangic->second;
		
	}
	
	
	~Fibo()
	{
		
		delete baslangic->third;
		delete baslangic->second;
		delete baslangic->first;
		delete baslangic;
		
	}
	
	
	void next_term(void)
	{
		
		*baslangic->first = *baslangic->second;
		*baslangic->second = *baslangic->third;
		*baslangic->third= *baslangic->first + *baslangic->second;
		
	}
	

	
};


bool check(int *);
void sum(int *, int*);

int main(void)
{
	
	class Fibo *fibo = new class Fibo;
	
	int *sayi, *toplam;
	sayi = new int;
	toplam = new int;
	*toplam=2;
	
	
	while(1)
	{
		fibo->next_term();
		*sayi = *fibo->baslangic->third;
		if(check(sayi))
			sum(sayi,toplam);
			
		if(*sayi > 4000000)
			break;
		
	}
	
	std::cout<<*toplam;
	
	delete fibo;
	delete toplam;
	delete sayi;
	
	return 0;
}

bool check(int *sayi)
{
	
	if(*sayi % 2 == 0 && *sayi<4000000)
		return 1;
	
	return 0;
	
}

void sum(int *sayi , int *sonuc){
	
	*sonuc += *sayi;
}
