#include<iostream>

class Entity
{
	int p_speed;
	const char* p_name;
	public:
		
		Entity(int level) : p_name("Batman")
		{
			p_speed = level>=5 ? 69 : 96;
		}
		void get()
		{
			std::cout<<p_speed<<" "<<p_name<<std::endl;
		}
}; 

int main()
{
	Entity e(7);
	e.get();
	
	
	Entity* e2;
	{//---> these brackets are used for scope
		Entity* entity = new Entity(4); // Heap allocation
		e2 = entity;
        e2.get();		
	}

	std::cin.get();
	delete entity;  //have to delete manually
	
}
	// we allocate heap if ----> either is true.
	//1.) Class is too big. 
	//2.) We need to do ot expliscitly.
	