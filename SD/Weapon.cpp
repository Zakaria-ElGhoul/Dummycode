#include <iostream>
#include "Weapon.h"

Weapon::Weapon(std::string aName, std::string aRarity)
{
    name = aName;
    rarity = aRarity;
}

Weapon::~Weapon()
{

}

std::string Weapon::GetName()
{
    return name;
}

std::string Weapon::GetRarity()
{
    return rarity;
}

void Weapon::SetName(std::string aName)
{
    name = aName;
}

void Weapon::SetRarity(std::string aRarity)
{
    rarity = aRarity;
}
