#include "PhoneBook.hpp"
#include "Contact.hpp"

#include <iomanip>

void PhoneBook::Add(int index) {

    Contact new_cont;
    std:: string tmp;

    new_cont.setIndex(index);
    std:: cout << "Enter first name" << std:: endl;
    getline(std:: cin, tmp);
    new_cont.setFirstName(tmp);
    std:: cout << "Enter last name" << std:: endl;
    getline(std:: cin, tmp);
    new_cont.setLastName(tmp);
    std:: cout << "Enter nickname" << std:: endl;
    getline(std:: cin, tmp);
    new_cont.setNickname(tmp);
    std:: cout << "Enter phone number" << std:: endl;
    getline(std:: cin, tmp);
    new_cont.setPhoneNumber(tmp);
    std:: cout << "Enter darkest secret" << std:: endl;
    getline(std:: cin, tmp);
    new_cont.setDarkestSecret(tmp);
    this->book[index] = new_cont;
}

void PhoneBook::ShowContactInfo(int count) const {

    int i = 0;
    std::cout << "|" << std::setw(10);
	std::cout << "Index";
	std::cout << "|" << std::setw(10);
	std::cout << "First Name";
	std::cout << "|" << std::setw(10);
	std::cout << "Last Name";
	std::cout << "|" << std::setw(10);
	std::cout << "Nickname";
	std::cout << "|" << std::endl;
    
    while (i < count)
    {
        std::string first = this->book[i].getFirstName();
		std::string last = this->book[i].getLastName();
		std::string nickname = this->book[i].getNickname();

		if (first.size() > 10)
		{
			first.resize(9);
			first.resize(10, '.');
		}
		if (last.size() > 10)
		{
			last.resize(9);
			last.resize(10, '.');
		}
		if (nickname.size() > 10)
		{
			nickname.resize(9);
			nickname.resize(10, '.');
		}
        std::cout << "|" << std::setw(10);
		std::cout << this->book[i].getIndex();
		std::cout << "|" << std::setw(10);
		std::cout << first;
		std::cout << "|" << std::setw(10);
		std::cout << last;
		std::cout << "|" << std::setw(10);
		std::cout << nickname;
		std::cout << "|" << std::endl;
		i++;
    }
}

void PhoneBook::Search(int count) const {
	std::string choice;
	int number;

	ShowContactInfo(count);	
	std::cout << "\nChoose a contact by number\n";
	getline(std::cin, choice);
	if (std::cin.eof() != 0)
		exit(0);
	number = std::stoi(choice);
	if (number < 0 || number >= count)
		std::cout << "\033[1;31mContact not found!\n \033[0m";
	else
		this->book[number].ShowList();
}