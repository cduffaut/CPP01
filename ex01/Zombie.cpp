#include "Zombie.hpp"

// Default constructor
// Init name member by empty value
Zombie::Zombie() : name (""){};

// Init zombie name constructor
Zombie::Zombie(std::string name) : name(name){}

// Print debogage message
// Then destroy zombie
Zombie::~Zombie()
{
    std::cout << name << " has been destroyed" << std::endl;
}

// This function does not modify any object
void Zombie::announce()
{
    std::cout << name << ": Coucou j'existe !" << std::endl;
}
