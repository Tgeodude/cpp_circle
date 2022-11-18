#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
private:
    /* data */
public:
    Dog(/* args */);
    virtual ~Dog();
    Dog(const Dog &src);
    Dog &operator=(const Dog &arg);
    void makeSound() const;
};


#endif