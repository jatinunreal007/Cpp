#include <iostream>
#include "h_01.h"

class Log
{
	private:
		int m_lvl;
	public:
		void Setlvl(int lvl)
		{
			lvl = m_lvl;
		}
		void Error(const char* message)
		{
			std::cout<<"[Error] : "<<message<<std::endl;
		}
		void Warning(int m_lvl)
		{
			std::cout<<"[Warning] : "<<m_lvl<<std::endl;
		}
		void Info(int m_lvl)
		{
			std::cout<<"[Info] : "<<m_lvl<<std::endl;
		}
};


int main()
{
	Log player;
	player.Error("Used $fpx");
	player.Setlvl(2);
	player.Warning(0);
	player.Info(1);
	
}