#include<iostream>
#include "h_01.h"

class Entity
{
  public:
	int sizeofErray = 5; // Need to store the sizeofArray...
	int Erray[4]; // integer array means every element has 4 byte of size and there are 5 elements 
	              // so 20 bytes and evwry integer has 4 byte 
	              //therefore can also be calculated by sizeof(Erray)/ sizeof(int)
	
	Entity(){
		for(int i = 0;i<sizeofErray;i++)
		{
			Erray[i] = 69;
		}
	}
	void getinfo()
	{
		for(int i=0;i<sizeofErray;i++)
		{
			std::cout<< Erray[i];
		}
		
	}
};
int main()
{
	Entity e;
	int array[5];// Stack memory
	for(int i=0;i<5;i++)
	{
		array[i] = i;
		std::cout<< array[i]<<"\n";
	}
	
	// Array is a pointer to certain block of memory
	
	int* another = new int[6];// Heap memory (using "new" keyword)
	for(int i=0; i<6; i++)
	{
		another[i]=i+1;
		std::cout<<another[i]<<"\n";
	}
	log("Deleting...");
	delete[] another; //We need to delete because heap memory doesnt delete by itself like stack (which gets deleted on code end)
	log("Deleted.");
	
	e.getinfo();
	std::cin.get();
}