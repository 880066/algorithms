#include <iostream>

using namespace std;

int main(void)

{
	class Sinif {
		public:
			
			static int basamak_sayisi(int sayi)
			{
				
				int sayac=0;
				int bolen = 10;
				
				while(sayi / bolen)
				{
					sayac++;
					bolen*=10;
				
				}
				
				return ++sayac;
				
			}
			
			static bool check_palindrome(int sayi)
			{
				
				int n=basamak_sayisi(sayi);
				int dizi_sayi[n];
				int sayi_kopya = sayi;
				
				for(int i =0; i<n; i++)
				{
					
					dizi_sayi[i]=sayi_kopya % 10;
					sayi_kopya -=dizi_sayi[i];
					sayi_kopya /=10;

				}

				for (int i = 0; i < n ; i++)
				{
					if (dizi_sayi[i] != dizi_sayi[n-1-i])
						return 0;
				}
				
				return 1;

			}
			
			static bool check_even(int sayi)
			{
				
				if(sayi %2 == 0)
					return 1;
					
				return 0;	
				
			}
		
	};
	
	int cevap=0;

	
	for(int i = 999; i>99;i--)
	{
		for(int j = i; j>99; j--)
			{
				int carpim = i*j;
				
				if(Sinif::check_palindrome(carpim) && carpim>cevap)
				{
					cevap=carpim;
					
				}		
			}	
	}
	
	cout<<cevap;

	return 0;
}
