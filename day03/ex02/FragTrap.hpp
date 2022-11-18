#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
    FragTrap(/* args */);
public:
    FragTrap(std::string _name);
    ~FragTrap();
    FragTrap(const FragTrap &src);
    FragTrap &operator=(const FragTrap &newValue);
    void highFivesGuys();
};


#endif