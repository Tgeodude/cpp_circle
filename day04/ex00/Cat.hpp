#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
private:
    /* data */
public:
    Cat(/* args */);
    ~Cat();
    Cat(const Cat &src);
    Cat &operator=(const Cat &arg);
    void makeSound() const;
}; 

#endif