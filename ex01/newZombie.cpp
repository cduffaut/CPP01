#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
    Zombie *create = new Zombie(name);
    return (create);
}