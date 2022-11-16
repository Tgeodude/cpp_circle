#include "ClapTrap.hpp"

int main ()
{
	ClapTrap A("Denis");
	ClapTrap B("Danya");

	A.attack("TARGET A");
	B.attack("TARGET B");


	A.takeDamage(5);
	B.takeDamage(8);

	A.beRepaired(1);
	B.beRepaired(6);

	A.attack("Danya");
	B.attack("Denis");

	return 0;
}