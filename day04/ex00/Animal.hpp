#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
protected:
    std::string type;
public:
    Animal(/* args */);
    virtual ~Animal();
    Animal(const Animal &src);
    Animal &operator=(const Animal &arg);
    std:: string getType() const;
    virtual void makeSound() const;
};

#endif