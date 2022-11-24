#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>
#include <string>

typedef struct Data {
    std::string str;
} Data;

uintptr_t serialize(Data* ptr)
{
	return(reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize(uintptr_t raw)
{
	return(reinterpret_cast<Data *>(raw));
}
#endif