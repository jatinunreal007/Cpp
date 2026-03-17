#include<iostream>
#include "h_01.h"

int main()
{
	for(int i =2 ; i<101 ;i++)
	{
		int pt =0;
		for(int j =1; j<101; j++)
		{	
			if (i%j == 0 ){ pt += 1; }
		}
	
	if(pt<=2){ std::cout<<i<<std::endl;	}
	}
	std::cin.get();
}