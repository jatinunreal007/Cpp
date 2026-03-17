#include<iostream>
#include "h_01.h"

class Entity
{
    private:
        int level;
        std::string name;
    public:
    Entity(std::string nm, int lvl)
        :level(lvl), name(nm)
    {

    }
        void get()
        {
            log(level);
            log(name);
        }
};

int main()
{
    Entity e("BruceWayne", 69);
    e.get();

    std::cin.get();
}