#ifndef HUMAN_HPP
#define HUMAN_HPP

# include "Weapon.hpp"

class HumanA {

	private :
		Weapon *weapon;
		std::string name;
	public :
		void attack();
		HumanA(std::string _name, Weapon &_weapon);
};

#endif