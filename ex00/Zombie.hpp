#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

// Class
class Zombie
{
	private:
    std::string name;

    public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();
    void announce();
};

// Funcs
void    randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif