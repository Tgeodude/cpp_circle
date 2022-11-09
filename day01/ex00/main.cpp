#include "Zombie.hpp"

int main (void){

	Zombie test("Foo");
	test.announce();
	test.randomChump("kek");
	Zombie *kek = NULL;
	kek = kek->newZombie("lol");
	kek->announce();

	delete kek;
	return(0);
}