#include <iostream>
#include "Player.h"
#include "Weapon.h"
#include "WeaponManager.h"

void clearConsole() {
    system("cls");
}

int main()
{
    std::string Input;
    Player player = Player("Zaka", 23, 10);
    Weapon weapon = Weapon("AUG", "Legendary");

    for (int i = 0; i < 20; i++)
    {
        std::cout << "Player name: " << player.GetName() << std::endl;
        std::cout << "Player health: " << player.GetHealth() << std::endl;
        std::cout << "Player Inventory space: " << player.GetInventorySpace() << std::endl;
        std::cout << "You see a " << weapon.GetRarity() << " " << weapon.GetName()  << " on the ground. You should pick it up!\n";
        std::getline(std::cin, Input);
        player.PickupWeapon(weapon);
        std::cin >> Input;

        clearConsole();
    }
}

