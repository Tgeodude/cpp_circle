#include "Cat.hpp"

Cat::Cat() {
    type = "Cat";
    std::cout << "Cat default constructor" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat destructor" << std::endl;
}

Cat::Cat(const Cat &src) {
    *this = src;
    std::cout << "Cat copy constructor"<< std::endl;
}

Cat &Cat::operator=(const Cat &arg) {
    this->type = arg.getType();
    std::cout <<"Cat copy assigment operator" << type << std::endl;
    return (*this);
}

void Cat::makeSound() const {
    std::cout << "meow!"<<std::endl;
}