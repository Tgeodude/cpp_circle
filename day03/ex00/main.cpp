#include "ClapTrap.hpp"

int main ()
{
	ClapTrap A("Lol");
	ClapTrap B("Kek");

	A.attack("TARGET A");
	B.attack("TARGET B");


	A.takeDamage(5);
	B.takeDamage(8);

	A.beRepaired(1);
	B.beRepaired(6);

	A.attack("Lol");
	B.attack("Kek");

	return 0;
}