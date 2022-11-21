#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain deafult constructor" << std::endl;
}

Brain::~Brain() {
    std::cout << "Brain destructor" << std::endl;
}

Brain::Brain(const Brain &src) {
    *this = src;
    std::cout << "Brain copy constructor" << std::endl;
}

Brain &Brain::operator=(const Brain &arg) {
    for (size_t i = 0; i < 100; i++)
    {
        this->ideas[i] = arg.ideas[i];
    }
    std::cout << "Brain copy assigment operator" << std::endl;
    return (*this);
}

