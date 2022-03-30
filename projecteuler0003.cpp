#include <iostream>


class Euler3{
	
	private:
		long long int *sayi;
	
	public:
		Euler3(long long int *sayi){
			
			this->sayi = new long long int;
			this->sayi = sayi;
			
			
		}
		
		~Euler3(){
			
			delete sayi;
			
		}
		
		 bool bolunur_mu(long long int *x)
		{
			if(*sayi % *x == 0)
				return 1;
			
			return 0;
		}
		
		void bol(long long int *x)
		{
			
			while (bolunur_mu(x))
				*sayi /=  *x;
				
			
		}
		
		static bool asal_mi(long long int *x)
		{
			long long int i = 3;
			
			while( i*i <= *x )
			{
				
				if(*x % i == 0 )
					return 0;
				
				else
					i+=2;
				
			}
			
			return 1;
			
		}  
	
};


int main (void)
{
	long long int sayi = 600851475143, x=2, i=3;
	class Euler3 *pr3 = new class Euler3(&sayi);
	
	pr3->bol(&x);
	
	
	while(sayi != 1)
	{
		
		if(Euler3::asal_mi(&i) && pr3->bolunur_mu(&i))
			{
				pr3->bol(&i);
			}
			
			if(sayi == 1)
				std::cout<<i;
			i+=2;
		
		
	}
	
	delete pr3;
	
	
	return 0;
}
