#include "Zombie.hpp"

int main()
{
    int i;
    int nbr;

    nbr = 5;
    Zombie *group = zombieHorde(nbr, "Zombie");

    i = 0;
    while (i < nbr)
    {
        group[i].announce();
        i++;
    }
    delete[] group;
    return (0);
}
