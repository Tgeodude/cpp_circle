#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
protected:
    Brain *DogBrain;
public:
    Dog(/* args */);
    virtual ~Dog();
    Dog(const Dog &src);
    Dog &operator=(const Dog &arg);
    void makeSound() const;
};


#endif