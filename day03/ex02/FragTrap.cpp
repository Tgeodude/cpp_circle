#include "FragTrap.hpp"

FragTrap::FragTrap(std::string _name) : ClapTrap("FragTrap") {
    this->hp = 100;
    this->energy = 100;
    this->damage = 30;
    std::cout << _name << " constructor called!" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << this->name << " Destructor called!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &newValue) {
    std::cout << "FragTrap assignement operator called" << std::endl;
    this->name = newValue.name;
    this->hp = newValue.hp;
    this->energy = newValue.energy;
    this->damage = newValue.damage;
    return (*this);
}

FragTrap::FragTrap(const FragTrap &src) {
    *this = src;
    std::cout << "FragTrap Copy constructor called" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap gives high fives" << std::endl;
}