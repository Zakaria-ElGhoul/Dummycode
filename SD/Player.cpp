#include <iostream>
#include "Player.h"

Player::Player(std::string aName, int aHealth, int amountOfInventorySpace)
{
	name = aName;
	health = aHealth;
	inventorySpace = amountOfInventorySpace;
}

Player::~Player()
{
}

#pragma region Getters en Setters
std::string Player::GetName()
{
	return name;
}
int Player::GetHealth()
{
	return health;
}
int Player::GetInventorySpace()
{
	return inventorySpace;
}
void Player::SetName(std::string aName)
{
	name = aName;
}
void Player::SetHealth(int aHealth)
{
	health = aHealth;
}
void Player::SetInventorySpace(int amountOfInventorySpace)
{
	amountOfInventorySpace = inventorySpace;
}

void Player::PickupWeapon(Weapon weapon)
{
	if (inventorySpace <= 0)
	{
		inventorySpace = 0;
		std::cout << "Inventory is full!\n";
		return;
	}
	else
	{
		inventory.push_back(weapon);
		inventorySpace--;
		std::cout << "Adding the weapon.\n";
	}
}
#pragma endregion


