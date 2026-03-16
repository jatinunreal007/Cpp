#include <iostream>
#include "h_01.h"

class Entity
{
public:
	float X,Y;
	Entity()
	{
		X= 0.0f;
		Y= 0.0f;
	}
	void Move(int x, int y)
	{
		X = x+X;
		Y = y+Y;
	}
	void getpos()
	{
		std::cout<<X<<","<<Y<<"\n";
	}
};
class Player: public Entity
{
	public:
		const char* Name = "Maximus Desmus Meridius";
		void Cool()
		{
			log("Cool");
		}
};
int main()
{
	Player player;
	std::cout<<player.Name<<std::endl;
	player.Cool();
	player.Move(3, 4);
	player.getpos();
	
	std::cin.get();
}