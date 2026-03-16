#include<iostream>

class Entity
{
	float x,y;
	public:
		void set(float x,float y)
		{
			this->x = x;//this keyword is just a pointer which points to the current class object
			this->y = y;
			Entity* e = this; //Ye h this
		}
		void get() const
		{
			std::cout<<x<<"\n";
			std::cout<<y<<"\n";
        }
};

int main()
{
	Entity e;
	e.set(4.0f, 6.0f);
	e.get();
	std::cin.get();
}
