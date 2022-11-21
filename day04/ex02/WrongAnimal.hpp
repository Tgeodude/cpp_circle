#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
    std::string type;
public:
    WrongAnimal(/* args */);
    ~WrongAnimal();
    WrongAnimal(const WrongAnimal &src);
    WrongAnimal &operator=(const WrongAnimal &arg);
    void makeSound() const;
    std::string getType() const;
    
};


#endif