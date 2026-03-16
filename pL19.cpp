#include<iostream>
#include"h_01.h"
#include<memory> //New thing!

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
   void print()
   {
   	std::cout<<"Hello "<<std::endl;
   }
   
};

int main()
{
	std::shared_ptr<Entity> e1; //this is only reference of the entity not a entity by itself, so we cant see the "created entity " output for this code
	{ 
		log("----");
		// Entity* entity = new Entity();  --> old version(basic)
		// delete entity;   --> has to delete for heap allocation
		std::unique_ptr<Entity> entity = std::make_unique<Entity>();//->  smart ptr , not need to delete on heap 
		std::shared_ptr<Entity> e0 = std::make_shared<Entity>();
		entity->print();
	}
		e1->print(); //But reference is still alive on heap !!
	//	e0->print();  --> got Destroyed bcoz out of scope
		
	std::cin.get();
}
// shared Entity will only get Destroyed when its all references are destroyed