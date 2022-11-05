#include "HumanB.hpp"

HumanB::HumanB(std::string _name, Weapon &_weapon){
    this->name = _name;
    this->weapon = &_weapon;
}

HumanB::HumanB(std::string _name){
    this->name = _name;
}

void HumanB::setWeapon(Weapon &_weapon) {
    this->weapon = &_weapon;
}

void HumanB::attack() {
    std:: cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}