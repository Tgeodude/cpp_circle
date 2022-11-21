#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:
    /* data */
public:
    WrongCat(/* args */);
    ~WrongCat();
    WrongCat(const WrongCat &src);
    WrongCat &operator=(const WrongCat &arg);
    void makeSound() const;
};

#endif