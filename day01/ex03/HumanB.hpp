#ifndef HUMANB_HPP
#define HUMANB_HPP

# include "Weapon.hpp"

class HumanB {
	
	private :
		Weapon *weapon;
		std::string name;
	public:
		HumanB(std::string _name, Weapon &_weapon);
		HumanB(std::string _name);
		void attack();
		void setWeapon(Weapon &_weapon);
};

#endif