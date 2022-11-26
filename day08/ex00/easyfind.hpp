#ifndef EASYFIND_HPP
#define EASYFIND_HPP

# include <iostream>
#include <algorithm>
#include <exception>
#include <list>
#include <vector> 
#include <string.h>

class ValueNotFound : public std::exception
{
    public:
        virtual const char * what() const throw();
};

const char * ValueNotFound::what () const throw(){
    return ("Value not found!");
}

template<typename T>

void easyfind(T container, int n) {

    typename T::iterator i;

    i = std::find(container.begin(), container.end(), n);
    i == container.end() ? throw ValueNotFound() : std::cout << "Value ["<< n << "] found!" << std::endl;
}

#endif
 