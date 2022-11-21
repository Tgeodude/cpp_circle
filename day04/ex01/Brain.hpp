#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Brain
{
private:
    std::string ideas[100];
public:
    Brain(/* args */);
    Brain(const Brain &src);
    Brain &operator=(const Brain &arg);
    virtual ~Brain();
};

#endif