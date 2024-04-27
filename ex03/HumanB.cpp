#include "HumanB.hpp"

HumanB::HumanB(const std::string &n) : name(n), weapon(nullptr) {}

void    HumanB::setWeapon(Weapon &w)
{
    weapon = &w;
}

void    HumanB::attack() const
{
    if (weapon)
    {
        std::cout << name << " attack with their " << weapon->getType() << std::endl;
    }
    else
    {
        std::cout << name << " is unarmed !" << std::endl;
    }
}