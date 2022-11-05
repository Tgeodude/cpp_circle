#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon &_weapon) {
    this->name = _name;
    this->weapon = &_weapon;
}

void HumanA::attack() {
    std:: cout << this->name << "attack" << this->weapon << std::endl;
}