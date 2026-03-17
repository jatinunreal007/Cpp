#include <iostream>
#include "h_01.h"

class Entity
{
	public:
		void print()
		{
			std::cout<<"Hello"<<std::endl;
		} 
	
};

// Automating delete when out of scope , like smart pointer-->

class ScopedPtr
{
	private:
		Entity* m_obj;
	public:
		ScopedPtr(Entity* m_obj)
			:m_obj(m_obj)
		{
		}
		~ScopedPtr()
		{
	    	delete m_obj;
	    }
	 // Entity* getobj()  {return m_obj;}
	 
	 //Smart way is below-->
		Entity* operator->()
		{
			return m_obj;  
		}
	 
	    
};

//
struct Vector3
{
	float x,y,z;
	
};


int main()
{
	Entity e1;
	Entity* e1_ptr = &e1;
	
	(*e1_ptr).print(); //Traditional way
	e1_ptr->print();  // Using arrow operator
	
//-----------------------------------------------------------------


	ScopedPtr entity = new Entity();
//	(*entity.getobj()).print();   --> ewww! instead od doing this .
	entity->print();   //Do this operator overloading
	
	
//-----------------------------------------------------------------
	
	// hum bas addresses ko organize krrhe h , taki 18280fgx92  aise type ke address na aye
	size_t  a = (size_t)&((Vector3*)nullptr)->x;
	size_t  b = (size_t)&((Vector3*)nullptr)->y;
	
	std::cout<<a<< std::endl;
	std::cout<<b<< std::endl;
	
	std::cin.get();
}