#pragma once
#include <string>

class Weapon
{
public:
	Weapon(std::string aName, std::string aRarity);
	~Weapon();

#pragma region Getters en setters


	std::string GetName();
	std::string GetRarity();

	void SetName(std::string aName);
	void SetRarity(std::string aRarity);

#pragma endregion

private:

	std::string name;
	std::string rarity;

private:

protected:
};

