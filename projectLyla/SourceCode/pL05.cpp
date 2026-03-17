#include<iostream>
#include "h_01.h"

struct Entity
{
	static int x,y;
	void print()
	{
		std::cout<<x<<","<<y<<std::endl; 
	}
};
int Entity::x;
int Entity::y;
int main()
{
	Entity e;
	Entity::x= 1;
	Entity::y = 2;
	e.print();
	std::cin.get();
}