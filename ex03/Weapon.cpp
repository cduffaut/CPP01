#include "Weapon.hpp"

Weapon::Weapon(const std::string &type) : str(type){}

const std::string &Weapon::getType() const
{
    return (str);
}

void Weapon::setType(const std::string &type)
{
    str = type;
}