#include "Zombie.hpp"

Zombie::Zombie(std::string _name) {
	this->name = _name;
}

void Zombie::announce(void){
	std:: cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(){
	std:: cout << this->name <<" died" << std::endl;
}

void Zombie::setName(std::string name){
	this->name = name;
}

Zombie::Zombie()
{
	this->name = "";
}