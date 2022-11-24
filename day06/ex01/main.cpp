#include "main.hpp"

int main(void)
{
    Data data;
    Data *deserial;
    uintptr_t serial;

    data.str = "kek";
    std::cout <<"Data adress: "<< &data << std::endl;
    std::cout <<"String: " << data.str <<std::endl;

    serial = serialize(&data);
    deserial = deserialize(serial);
    
    std::cout <<"New adress: " << deserial <<std::endl;
    std::cout <<"String: " << deserial->str <<std::endl;

    return (0);
}