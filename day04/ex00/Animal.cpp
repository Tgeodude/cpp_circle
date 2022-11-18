#include "Animal.hpp"

Animal::Animal() {
    this->type = "Animal";
    std::cout << "Animal default constructor" << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal destructor" << std::endl;
}

Animal::Animal(const Animal &src) {
    *this = src;
    std::cout << "Animal copy constructor"<< std::endl;
}

Animal &Animal::operator=(const Animal &arg) {
    this->type = arg.getType();
    std::cout <<"Animal copy assigment operator" << type << std::endl;
    return (*this);
}

std::string Animal::getType() const {
    return (this->type);
}

void Animal::makeSound() const {
    std::cout << "I`m not a cat or dog. I`m just an Animal!"<<std::endl;
}