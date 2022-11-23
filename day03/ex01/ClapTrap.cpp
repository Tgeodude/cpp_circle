#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
    std::cout << "Default constructor called!" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap destructor called!" << std::endl;
}

ClapTrap::ClapTrap(std::string _name): name(_name), hp(10), energy(10), damage(0) {
    std::cout << this->name << " Constructor called!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &arg) {
    std::cout << "ClapTrap copy constructor called!" << std::endl;
    *this = arg;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &arg) {
    std::cout << "Copy assigment constructor called!" << std::endl;
    this->name = arg.name;
    this->hp = arg.hp;
    this->energy = arg.energy;
    this->damage = arg.damage;
    return *this;
}

void ClapTrap::attack(const std::string &target) {
    if (this->energy > 0 && this->hp > 0)
        std::cout <<  this->name  << " attacks " << target << ", causig " << this->damage << " damage!" << std::endl;
    --(this->energy);
}

void ClapTrap::takeDamage(unsigned int amount) {
    this->hp -= amount;
    std::cout <<  this->name << " took a " << amount << " damage! Current hp is " << this->hp <<std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->hp > 0 && this->energy > 0)
    {
        this->hp += amount;
        std::cout << this->name << " repaired a " << amount << " hp! Current hp is " << this->hp<< std::endl;
        --(this->energy);
    }
}