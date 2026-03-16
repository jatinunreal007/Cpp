#include<iostream>
#include "h_01.h"

class Entity
{
	public:
		int Voice;
	
	Entity()
	{
		log("Created Entity...");
	}
   ~Entity()
   {
   		log("Destroyed Entity ...");
   }
   
};

int* Array1(int i)
{
	int* array = new int[i];   //Wrong , because the array will get destroyed as soon as the function gets destroyed
	return array;
}
int* Array2(int i)
{
	int array[i];
	return array;
}
int main()
{
	{				
		Entity e1;
		Entity* e2 = new Entity(); //-> But not this because its on heap hahaha..
	}	//------------->Entity gets destroyed out of this scope
	int* ptr1 = Array1(69);
	*(ptr1) = 96;
	std::cout<<*ptr1<<std::endl;
	
	int* ptr2 = Array2(96);// Will not work
	*(ptr2) = 69;// bcoz there is no 
	std::cout<<*ptr2<<std::endl;//array left , bcoz it was stacked
	
	std::cin.get();
}