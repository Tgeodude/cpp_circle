#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
protected:
    Brain *CatBrain;
public:
    Cat(/* args */);
    ~Cat();
    Cat(const Cat &src);
    Cat &operator=(const Cat &arg);
    void makeSound() const;
}; 

#endif