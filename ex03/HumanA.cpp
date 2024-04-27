#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

HumanA::HumanA(const std::string &n,  Weapon &w) : name(n), weapon(w) {}

void    HumanA::attack() const
{
    std::cout << name << " attack with their " << weapon.getType() << std::endl;
}