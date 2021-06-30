#pragma once
#include <string>
#include <vector>
#include "Weapon.h"

class Player
{
	public:
		Player(std::string aName, int aHealth, int amountOfInventorySpace);
		~Player();

#pragma region Getters en setters


		std::string GetName();
		int GetHealth();
		int GetInventorySpace();

		void SetName(std::string aName);
		void SetHealth(int aHealth);
		void SetInventorySpace(int amountOfInventorySpace);
		void PickupWeapon(Weapon weapon);

#pragma endregion

	private:
	std::vector<Weapon> inventory;
	std::string name;
	int health;
	int inventorySpace;

	private:

	protected:
};

