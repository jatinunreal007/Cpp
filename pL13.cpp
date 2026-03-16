#include<iostream>
#include<string>
//--------Mutable and Member initializer list------>

class Entity
{
	private:
		const char* status; 
		mutable int level; //Mutable variable
	public:
		Entity() : level(0)  , status("Vengence") //---> Here initialize variable
		{
			void init(void);         //---Any initializer function
		}
		
		void get() const // we can change level var in evenin const
						 // therefore, we can create Const Entitiy.
		{
			level++;     //voilá ,, we can update mutable variable.
			std::cout<<level<<std::endl;
			std::cout<<status<<std::endl;
		}
};

int main()
{
    //-----Compressed if/else statement( terniary operator)
	int p_speed = 100000;
	std::string p_level;
	p_level = p_speed>15 ? "Flash" : "Turtle";
	std::cout<<p_level<<std::endl;
//  variable = (condition) ? [Means if true] (Then do this ) : [Means if false ] (Do this)
	
	const Entity m_01;
	m_01.get();
	
	std::cin.get();
}