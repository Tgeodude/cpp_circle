#include "Zombie.hpp"

int main (void){

	Zombie test("Foo");
	test.announce();
	test.randomChump("kek");
	Zombie *kek = NULL;
	kek = kek->newZombie("lol");

	delete kek;
	return(0);
}