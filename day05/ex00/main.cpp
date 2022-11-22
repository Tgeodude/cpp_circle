#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat bur1("Kek",2);
        Bureaucrat bur2("Lol", 150);

        std::cout << bur1 << std::endl;
        std::cout << bur2 << std::endl;
        bur1.inCrease();
        std::cout << bur1 << std::endl;

        bur2.deCrease();

        Bureaucrat bur3("Nedoidet",12);
        std::cout << bur3 << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
       
}