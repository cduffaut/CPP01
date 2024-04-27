#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    int i;
    Zombie  *zombie_group = new Zombie[N];

    i = 0;
    while (i < N)
    {
        new (&zombie_group[i]) Zombie(name);
        i++;
    }
    return (zombie_group);
}