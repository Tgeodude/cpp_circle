#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main(void)
{
	Animal*	 Persik = new Dog();
	std::cout << std::endl;

	Animal*	Murka = new Cat();
	std::cout << std::endl;

	Persik->makeSound();
	std::cout << std::endl;

	Murka->makeSound();
	std::cout <<std::endl;


	// Animal* 	b = new Animal(); // не работает тк Animal - абстрактный класс
	return (0);
}