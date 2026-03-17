#include <iostream>
#include "h_01.h"

class player
{
	int x,y;
	int rate;
public:
	void velocity(int rate)
	{
		this->rate = rate;
		x = x + rate;
		y = y + rate;
	}
	void setpar(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	void getpar()
	{
		std::cout<<x<<std::endl;
		std::cout<<y<<std::endl;
		std::cout<<rate<<std::endl;
	}
	
};

int main(){
	player jack;
	
	jack.setpar(3,4);
	jack.velocity(5);
	jack.getpar();
	
 return 0;
}