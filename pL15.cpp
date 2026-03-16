#include<iostream>
#include<string>

class Entity
{
	private:
		std::string e_name;
		int Level;
	public:
	
		Entity() : e_name("Bueno! "), Level(0)
		{
			
		}
		
		void get()
		{
			std::cout<<e_name<<std::endl;
		}
};


int main()
{
	Entity e1; //----> Normal way (sAtck allocation)
    e1.get();  
	
	Entity* e2 = new Entity;  //---->Heap Allocation[Just an e2 pointer which points to the data type Entity]
	(*e2).get();   //--> Dreferencing first as it is a pointer 
	
	//similary we can allocate arrays, strings, ints etc..
	
	int* array = new int[10];  //---> array memory allocation on heap(4x10=40 bytes)
	for(int i=0;i<10;i++)         // Array itself is just a memory block 
	{  
		
//----------------------------------------------------------------------------------------------------------------
		
		
/*$*/	array[i] = i;   //$$$$$$$$$$$$$$ Here we dont need to dereference the array pointer as its included in [ ]brackets
//      array[0]  is same as *(array)
//      array[1]  is same as *(array+1)
//      Always Remember an array pointer points to the first element of the block of memory allocated 
//      Thats why we can write --> *(array+ i)


//-------------------------------------------------------------------------------------------------------------------

		std::cout<<i<<std::endl;
	}
	
	for(int i=0;i<10;i++ )
	{ 
		*(array +i ) = i+69;
		std::cout<<array[i]<<std::endl;
	}
	
	std::cin.get();
	delete e2;   //Have to delete manually
	delete[] array; //[] in case of an array
}