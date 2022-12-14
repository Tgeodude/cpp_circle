#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

std::string string_toupper(std::string str)
{
	int i = 0;
	
	while (str[i])
	{
		str[i] = toupper(str[i]);
		i++;
	}
	return (str);
}

int main (void)
{
    PhoneBook book;
    int count = 0;
    std:: string name;
    std::cout << std::setw(50) << "\033[1;32mWelcome to Phonebook!\n \033[0m";
    while (1)
    {
        std::cout << "\nEnter command: ADD, SEARCH or EXIT" << std::endl;
        std:: getline(std:: cin, name);
        if (std::cin.eof() != 0)
			exit (0);
        name = string_toupper(name);
        if (name == "ADD")
        {   
                count = book.Add(count);
                if (count < 8)
                    count++;
        }
        else if (name == "SEARCH")
			book.Search(count);
        else if (name == "EXIT")
            return(0);
        else
            std:: cout << "\033[1;31mIncorrect input!\n \033[0m" << std:: endl;
    }
}