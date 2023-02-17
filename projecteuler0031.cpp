#include <iostream>
using namespace std;


//1p, 2p, 5p, 10p, 20p, 50p, £1 (100p), and £2 (200p).

int main() {
	
	int count =0;
	
	for(int a = 0 ; a<2; a++ )  //200p
		{
			for(int b=0; b<3; b++) //100
			{
				if(a*200 + b*100 > 200)
					break;
				
				for(int c=0; c<5;c++) //50
				{
					if(a*200 + b*100 + c*50> 200)
						break;
					
					for(int d=0;d<11;d++) // 20
					{
						if(a*200 + b*100 + c*50 + d*20> 200)
							break;
						
						for(int e=0;e<21;e++) //10
						{
							if(a*200 + b*100 + c*50 + d*20 + e*10> 200)
								break;
							
							for(int f=0;f<41;f++)//5
							{
								if(a*200 + b*100 + c*50 + d*20 + e*10 + f*5> 200)
									break;
								
								for(int g=0;g<101;g++)//2
								{
									if(a*200 + b*100 + c*50 + d*20 + e*10 + f*5 + g*2 <= 200)
										count++;
										
									
								}
								
							}
						}
					}
				}
				
			}
				
		}
		
		cout<<count;
    

    return 0;
}
