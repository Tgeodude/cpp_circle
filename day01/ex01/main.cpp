#include "Zombie.hpp"

int main (void){

	Zombie *zombies;

	zombies = zombieHorde(11, "Kek");
	for (int i = 0; i < 11; i++)
		zombies[i].announce();
	delete[] zombies;
	return(0);
}