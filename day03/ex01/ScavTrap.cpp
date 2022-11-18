#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("ScavTrap") {
    this->hp = 100;
    this->damage = 20;
    this->energy = 50;
    std::cout << this->name << " constructor called!" << std::endl;
}

ScavTrap::~ScavTrap(){
    std::cout << this->name << " destructor called!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) {
    *this = src;
    std::cout << this->name << " copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &newValue) {
    std::cout<< this->name << " assignement operator called" << std::endl;
    this->name = newValue.name;
    this->hp = newValue.hp;
    this->damage = newValue.damage;
    this->energy = newValue.energy;
    return (*this);
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}