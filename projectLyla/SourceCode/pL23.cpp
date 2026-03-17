#include<iostream>

class Entity
{
	static int x; //Static means it will not change , its like its declared in global scope , but can
	int y;        // only be accessed in that scope where its declared
	public:
		Entity()
		{
			x = 1;
			y = 1;
		}
		void get()
		{
			std::cout<<x<<std::endl;
			std::cout<<y<<std::endl;
			x=x+1;
			y=y+1;
		}
};

void fn()
{
	std::cout<<"hlo"<<std::endl;
}

int Entity::x; //---> Definition require for static members

int main()
{
	Entity e1;
	Entity e2;
	Entity e3;
	e1.get();
	e2.get();
	e3.get();
	fn();

	
	//In the code above bcoz x is static therefore it will persist for whole Entity class objects
	//But not in case of y
	std::cin.get();
}