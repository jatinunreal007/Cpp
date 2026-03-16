#include<iostream>

class Entity
{
    public:
        Entity()
        {
            std::cout<<"Entity Created"<<std::endl;
        }
};

int main()
{
    Entity e1;
    std::cin.get();
}