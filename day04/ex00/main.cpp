#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << std::endl;

    std::cout << j->getType() << " type is here" << std::endl;
    std::cout << i->getType() << " type is here" << std::endl;

    std::cout << std::endl;

    i->makeSound(); 
    j->makeSound();
    meta->makeSound();

    std::cout << std::endl;
	std::cout << std::endl;

    delete j;
	delete i;
    delete meta;

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    Animal		Animal;
	Dog			Persik;
	Cat			Marusya;
	WrongAnimal	Shvabra;
	WrongCat	Dikobraz;

	std::cout << std::endl;

	std::cout << Animal.getType() << std::endl;
	Animal.makeSound();

	std::cout << std::endl;

	std::cout << Persik.getType() << std::endl;
	Persik.makeSound();

	std::cout << std::endl;

	std::cout << Marusya.getType() << std::endl;
	Marusya.makeSound();

	std::cout << std::endl;

	std::cout << Shvabra.getType() << std::endl;
	Shvabra.makeSound();

	std::cout << std::endl;

	std::cout << Dikobraz.getType() << std::endl;
	Dikobraz.makeSound();

	std::cout << std::endl;
	std::cout << std::endl;
	
	WrongAnimal A = Dikobraz;
	std::cout << Dikobraz.getType() << std::endl;
	A.makeSound();


    return 0;
}