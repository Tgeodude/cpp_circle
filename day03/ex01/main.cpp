#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main (){
	ClapTrap A("ClapTrap");
	ScavTrap B;

	B.guardGate();

	A.attack("ScavTrap");
	B.attack("ClapTrap");

	A.takeDamage(5);
	B.takeDamage(8);

	A.beRepaired(1);
	B.beRepaired(6);

	A.attack("ScavTrap");
	B.attack("ClapTrap");

	A.takeDamage(100);
	B.takeDamage(8);

	return 0;
}