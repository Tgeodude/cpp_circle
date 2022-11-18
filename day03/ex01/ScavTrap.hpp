#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
private:
    /* data */
public:
    ScavTrap(/* args */);
    ~ScavTrap();
    ScavTrap(const ScavTrap &src);
    ScavTrap &operator=(const ScavTrap &newValue);
    void guardGate();
};

#endif