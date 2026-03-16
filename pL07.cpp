#include<iostream>
#include"h_01.h"

class Entity
{
public:
	float X,Y;
	/*void init()
	{
		X=0;
		Y=0;
	}
	*/
	Entity(float x, float y)
	{
		X = x;
		Y = y;
		log("Created");
	}
	~Entity()
	{
		log("Destroyed");
	}
	void getProp()
	{
		std::cout<< X<<", "<<Y<<std::endl;
	}
};
void function()
{
	Entity e(0.0f, 0.0f);
	e.getProp();
}
int main()
{
	//e.init();
	function();
	std::cin.get();
}