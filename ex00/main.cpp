#include "Zombie.hpp"

int main()
{
    // Creation of a the Zombie with newZombie
    Zombie* random_zombie1 = newZombie("zombie1");
    random_zombie1->announce();
    delete random_zombie1;
    std::cout << std::endl;

    // Creation of a the Zombie on the stack with randomChump
    // And explicit freeing
    randomChump("zombie2");

    return (0);
}
