#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int main (void)
{
    PhoneBook book;
    int count = 0;
    std:: string name;
    std:: cout << "Welcome, it's PhoneBook" << std:: endl;
    while (1)
    {
        std:: getline(std:: cin, name);
        if (name == "ADD")
        {   
            book.Add(count);
            count++;
        }
        else if (name == "SEARCH")
			book.Search(count);
        else if (name == "EXIT")
            return(0);
        else
            std:: cout << "Incorrect input" << std:: endl;
    }
}